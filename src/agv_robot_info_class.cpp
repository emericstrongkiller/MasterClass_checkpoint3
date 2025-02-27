#include "robot_info/agv_robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *node_handle)
    : RobotInfo(node_handle) {}

void AGVRobotInfo::publish_data() {
  robotinfo_msgs::RobotInfo10Fields data_;
  data_.data_field_01 = "robot_description: " + robot_description;
  data_.data_field_02 = "serial_number: " + serial_number;
  data_.data_field_03 = "ip_address: " + ip_address;
  data_.data_field_04 = "firmware_version: " + firmware_version;
  data_.data_field_05 = "maximum_payload: " + std::to_string(maximum_payload);

  std::vector<std::string> hydro_variables = h_syst_monitor.Get_variables();
  data_.data_field_06 = "hydraulic_oil_temperature: " + hydro_variables[0];
  data_.data_field_07 = "hydraulic_oil_tank_fill_level: " + hydro_variables[1];
  data_.data_field_08 = "hydraulic_oil_pressure: " + hydro_variables[2];

  info_publisher.publish(data_);
}