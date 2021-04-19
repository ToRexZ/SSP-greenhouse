//My includes
#include "Tomatoplant.h"
#include "RegulationSystem.h"
#include "WaterRegulator.h"

//Libraries
#include <iostream>

int main(int argc, char const *argv[])
{
    double goal;

    std::cout << "Set goal water level: ";
    std::cin >> goal;
    WaterRegulator wr = {goal};
    std::cout << "Goal water level: " << wr.GetGoalValue() << "\n";
    std::cout << "Water level: " << wr.getWaterLevel() << "\n";
    std::cout << "SystemState: " << wr.getSystemState() << "\n";
    wr.configUpdate();
    std::cout << "Goal water level: " << wr.GetGoalValue() << "\n";
    return 0;
}
