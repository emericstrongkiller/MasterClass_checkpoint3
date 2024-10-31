#pragma once
#include "ros/ros.h"
#include <vector>

class HydraulicSystemMonitor {
public:
  HydraulicSystemMonitor() = default;
  std::string Hydraulic_oil_temperature();
  std::string Hydraulic_oil_tank_fill_level();
  std::string Hydraulic_oil_pressure();
  std::vector<std::string> Get_variables();

private:
  std::string hydraulic_oil_temperature = "45C";
  std::string hydraulic_oil_tank_fill_level = "100%";
  std::string hydraulic_oil_pressure = "250 bar";
};