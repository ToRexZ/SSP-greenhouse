#include "RegulationSystem.h"

class WaterRegulator : public RegulationSystem
{
private:
  int waterLevel{1};

public:
  //Waterlevel getter function
  int getWaterLevel() { return waterLevel; };
};
