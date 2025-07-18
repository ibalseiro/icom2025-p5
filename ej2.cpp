#include "headers/ej2.h"
#include <iostream>

void ImprimeVector(double Vector[], int NumElementos)
{
    for (int i = 0; i < NumElementos; ++i)
    {
        std::cout << Vector[i];
        if (i < NumElementos - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
}

#ifndef TESTING
int main()
{
    double v[] = {1.1, 2.2, 3.3};
    ImprimeVector(v, 3);
    return 0;
}
#endif