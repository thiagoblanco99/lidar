from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

from ament_index_python.packages import get_package_share_directory
from pathlib import Path

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


ignition_ros_package_path=get_package_share_directory("ros_gz_sim")
version1_pkg_path=get_package_share_directory("version1")
simulation_world_file_path = Path(version1_pkg_path, "worlds/visualize_lidar.sdf").as_posix()


def generate_launch_description():
    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                launch_file_path=Path(ignition_ros_package_path, "launch/gz_sim.launch.py").as_posix()
        ),
        launch_arguments={"gz_args": simulation_world_file_path}.items()
        ),
        Node(
            package="ros_ign_bridge",
            executable="parameter_bridge",
            arguments=["lidar3@sensor_msgs/msg/LaserScan[ignition.msgs.LaserScan"],
            ros_arguments=["-r /lidar3:=/laser_scan"],
            output="screen"
        ),
        Node(
            package="ros_ign_bridge",
            executable="parameter_bridge",
            arguments=["model/vehicle_blue/cmd_vel@geometry_msgs/msg/Twist]ignition.msgs.Twist"],
            output="screen"
        ),
        Node(
        package="version1",
        executable="publisher_laserscan.py",
        name="laserscan_node"
        )
    ])
    
    
    
#    return LaunchDescription([
#        Node(
#        package="version1",
#        executable="publisher_laserscan.py",
#        name="laserscan_node"
#        ),
#        ExecuteProcess(
#        cmd=['ros2', 'topic', 'list'],
#        output="screen"
#        )
#        ])