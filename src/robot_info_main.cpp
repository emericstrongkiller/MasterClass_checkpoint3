#include "robot_info/robot_info_class.h"
#include "ros/node_handle.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info_node");
  ros::NodeHandle nh;
  RobotInfo info_robot = RobotInfo(&nh);
  info_robot.publish_data();
  ros::spin();
}