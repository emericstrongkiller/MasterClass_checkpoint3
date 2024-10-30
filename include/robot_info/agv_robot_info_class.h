#pragma once
#include "robot_info/robot_info_class.h"

class AGVRobotInfo : public RobotInfo {
protected:
  float maximum_payload = 3.0;

public:
  AGVRobotInfo(ros::NodeHandle *node_handle);
  void publish_data() override;
};