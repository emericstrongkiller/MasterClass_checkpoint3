#pragma once
#include "robot_info/hydraulic_system_monitor.h"
#include "robot_info/robot_info_class.h"

class AGVRobotInfo : public RobotInfo {
protected:
  float maximum_payload = 3.0;
  HydraulicSystemMonitor h_syst_monitor;

public:
  AGVRobotInfo(ros::NodeHandle *node_handle);
  void publish_data() override;
};