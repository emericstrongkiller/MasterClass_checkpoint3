// robot_info_class.cpp
#include "robot_info/robot_info_class.h"

// Define the constructor to match the declaration in the header file
RobotInfo::RobotInfo(ros::NodeHandle *node_handle) {
  nh = node_handle;
  info_publisher = nh->advertise<robotinfo_msgs::RobotInfo10Fields>(
      info_publisher_topic, 1000);
}

void RobotInfo::publish_data() {
  robotinfo_msgs::RobotInfo10Fields data_;
  data_.data_field_01 = robot_description;
  data_.data_field_02 = serial_number;
  data_.data_field_03 = ip_address;
  data_.data_field_04 = firmware_version;
  // info_publisher.publish(data_);
}
