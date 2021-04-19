// #include <stdio.h>
#include "Tomatoplant.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Tomatoplant hej = {1,5};
    std::cout << hej.getCount() << std::endl;
    std::cout << hej.getHeight() << std::endl;
    return 0;
}
