#ifndef REGULATIONSYSTEM_H
#define REGULATIONSYSTEM_H
#pragma once

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
  virtual void configUpdate() = 0; //virtual angiver at baseklassen forventer barnet declarerer funktionen.
};

#endif