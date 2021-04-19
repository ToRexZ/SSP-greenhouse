#ifndef REGULATIONSYSTEM_H
#define REGULATIONSYSTEM_H

class RegulationSystem
{
private:
  bool systemState{true}; //Turned on by default
  float updateRate;
  double goalValue;

public:
  bool getSystemState() { return systemState; }
  void configUpdate();
};

#endif