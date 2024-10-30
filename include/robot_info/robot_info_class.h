// robot_info_class.h
#pragma once

#include "robotinfo_msgs/RobotInfo10Fields.h"
#include "ros/node_handle.h"
#include "ros/ros.h"

class RobotInfo {
public:
  RobotInfo() = default; // Default constructor
  explicit RobotInfo(
      ros::NodeHandle *node_handle); // Constructor with NodeHandle pointer
  // virtual ~RobotInfo() = default;    // Virtual destructor for polymorphism
  virtual void publish_data();

protected:
  std::string robot_description =
      "small form factor differential drive Robot using N20 DC motors";
  std::string serial_number = "1";
  std::string ip_address = "172.20.10.9";
  std::string firmware_version = "V0.0";
  ros::Publisher info_publisher;
  ros::NodeHandle *nh = nullptr;
  std::string info_publisher_topic = "robot_info";
};