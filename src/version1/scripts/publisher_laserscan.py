#!/usr/bin/env python3

import rclpy
from rclpy.node import Node #clase que tiene todas las cosas para hacer un nodo
from  sensor_msgs.msg import LaserScan #importa el tipo de mensaje a usar
from  sensor_msgs.msg import PointCloud2
import laser_geometry.laser_geometry as lg

class laser_sub(Node):
    def __init__(self):

        super().__init__("laser_pub_node")#inicializa un nodo
        self.pub_pointcloud = self.create_publisher (PointCloud2,"cloud",10)#self.create_publisher(tipo de mensaje, nombre del topic,QoS creo que es para ver que tantos mensajes guarda si se desconecta el robot)
        self.sub= self.create_subscription(LaserScan, "laser_scan",self.subscriber_callback,10)#(Tipo de mensaje,a que publicador te suscribis, funcion que se repite cada vez que recibis algo del publicador, supongo que es el QoS del subscriptor)      
    
    def subscriber_callback(self,msg): #creo la funcion que quiero que haga el subscriptor cuando recibe un mensaje del publicador.  
        lp = lg.LaserProjection()
        cloud= lp.projectLaser(msg)
        self.pub_pointcloud.publish(cloud)

def main(arg=None):
    rclpy.init() #inicia la comunicacion con el dds
    my_sub = laser_sub() #crea una instancia de este subscriber)


    try:
        rclpy.spin(my_sub) #corre hasta que haya una interrupcion del teclado
    except KeyboardInterrupt:
        my_sub.destroy_node() #destruye el nodo

if __name__ == '__main__':
    main()
