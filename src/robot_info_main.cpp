#include "robot_info/robot_info_class.h"
#include "ros/node_handle.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info_node");
  ros::NodeHandle nh;
  RobotInfo info_robot = RobotInfo(&nh);
  ROS_INFO("robot_info_node initialized !");

  ros::Rate loop_rate(2); // Setting the loop rate to 2 Hz, change as needed
  while (true) {
    info_robot.publish_data();
    ros::spinOnce();
    loop_rate.sleep();
  }
}