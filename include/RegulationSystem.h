#ifndef REGULATIONSYSTEM_H
#define REGULATIONSYSTEM_H

class RegulationSystem
{
private:
  bool systemState;
  float updateRate;
  double goalValue;

public:
  RegulationSystem(/* args */);
  ~RegulationSystem();
  void configUpdate();
};

#endif