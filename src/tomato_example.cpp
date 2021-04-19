//My includes
#include "Tomatoplant.h"
#include "RegulationSystem.h"
#include "WaterRegulator.h"

//Libraries
#include <iostream>

int main(int argc, char const *argv[])
{
    WaterRegulator wr;
    std::cout << "Water level: " << wr.getWaterLevel() << "\n";
    std::cout << "SystemState: " << wr.getSystemState() << "\n";
    return 0;
}
