ign gazebo visualize_lidar.sdf //ejecuta el mundo con la simulación

ros2 run ros_gz_bridge parameter_bridge /model/vehicle_blue/cmd_vel@geometry_msgs/msg/Twist]ignition.msgs.Twist //hago bridge para que ignition entienda los comandos de teleop.

ros2 run ros_gz_bridge parameter_bridge /lidar3@sensor_msgs/msg/LaserScan[ignition.msgs.LaserScan --ros-args -r /lidar3:=/laser_scan // hago bridge de datos lidar3 de ign a ros2.

rviz2 // abro rviz y en fixed framed tengo que poner vehicle_blue/lidar_link/rplidar

ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/model/vehicle_blue/cmd_vel // abro la ventana de comandos teleop para controlar el robot.
 
 python3 publisher_laserscan.py // Por si queremos probar el traspaso de publisher y subscriber.

 
 
 IMPORTANTE HACER LOS SOURCE EN LAS VENTANAS DE COMANDO.
