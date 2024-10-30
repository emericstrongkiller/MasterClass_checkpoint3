#include "robot_info/agv_robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *node_handle)
    : RobotInfo(node_handle) {}

void AGVRobotInfo::publish_data() {
  robotinfo_msgs::RobotInfo10Fields data_;
  data_.data_field_01 = robot_description;
  data_.data_field_02 = serial_number;
  data_.data_field_03 = ip_address;
  data_.data_field_04 = firmware_version;
  data_.data_field_05 = std::to_string(maximum_payload);
  info_publisher.publish(data_);
}