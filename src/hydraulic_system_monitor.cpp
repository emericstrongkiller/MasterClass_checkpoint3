#include "robot_info/hydraulic_system_monitor.h"
#include <string>
#include <vector>

std::string HydraulicSystemMonitor::Hydraulic_oil_temperature() {
  return this->hydraulic_oil_temperature;
}

std::string HydraulicSystemMonitor::Hydraulic_oil_tank_fill_level() {
  return this->hydraulic_oil_tank_fill_level;
}

std::string HydraulicSystemMonitor::Hydraulic_oil_pressure() {
  return this->hydraulic_oil_pressure;
}

std::vector<std::string> HydraulicSystemMonitor::Get_variables() {
  std::vector<std::string> variables;
  variables.push_back(this->hydraulic_oil_temperature);
  variables.push_back(this->hydraulic_oil_tank_fill_level);
  variables.push_back(this->hydraulic_oil_pressure);
  return variables;
}
