#include <iostream>
#include "sampleFun.h"

int main()
{
    std::cout << "hello" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }

    printHello();
    return 0;
}

