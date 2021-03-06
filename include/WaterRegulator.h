#pragma once
#include "RegulationSystem.h"

class WaterRegulator : public RegulationSystem
{
private:
  int waterLevel{1};

public:
  //Waterlevel getter function
  int getWaterLevel() { return waterLevel; };
  //Constructors
  WaterRegulator(){};
  WaterRegulator(double tempGoal) { goalValue = tempGoal; };
  void configUpdate() override
  {
    this->goalValue++;
  };
};
