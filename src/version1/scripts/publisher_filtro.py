#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from  sensor_msgs.msg import PointCloud2
import pcl_conversions

class cloud_sub(Node):
    def __init__(self):
        super().__init__("cloud_pub_node")
        self.pub_filtro = self.create_publisher (PointCloud2,"filtrado",10)
        self.sub= self.create_subscription(PointCloud2, "cloud",self.subscriber_callback,10)
    
    def subscriber_callback(self,msg):
        cloud= pcl_conversions.msg_to_pcl(msg)
        fil = cloud.make_passthrough_filter()
        fil.set_filter_field_name("z")
        fil.set_filter_limits(0.0, 1.0)
        cloud_filtered = fil.filter()
        msg = pcl_conversions.pcl_to_msg(cloud_filtered)
        self.pub_filtro.publish(msg)




def main(arg=None):
    rclpy.init()
    my_sub = cloud_sub()
    
    try:
        rclpy.spin(my_sub)
    except KeyboardInterrupt:
        my_sub.destroy_node()

if __name__ == '__main__':
    main()
