#include "robot_info/agv_robot_info_class.h"
#include "ros/init.h"
#include "ros/node_handle.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "agv_robot_info_node");
  ros::NodeHandle nh;
  AGVRobotInfo agv_info_robot = AGVRobotInfo(&nh);
  ROS_INFO("robot_info_node initialized !");

  ros::Rate loop_rate(2); // Setting the loop rate to 2 Hz, change as needed
  while (true) {
    agv_info_robot.publish_data();
    ros::spinOnce();
    loop_rate.sleep();
  }
}