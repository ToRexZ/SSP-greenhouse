#ifndef REGULATIONSYSTEM_H
#define REGULATIONSYSTEM_H

class RegulationSystem
{
private:
  bool systemState{true}; //Turned on by default
  float updateRate;

protected:
  double goalValue;

public:
  double GetGoalValue() { return goalValue; };
  bool getSystemState() { return systemState; }
  void configUpdate();
};

#endif