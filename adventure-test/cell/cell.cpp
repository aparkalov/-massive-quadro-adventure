#include "cell.h"
#include "stdlib.h"

#include <iostream>
#include <time.h>

Cell::Cell()
{
    value = rand() % 255;
}

Cell::~Cell()
{

}

void Cell::interact()
{
    std::cout << "width = " << width << "height = " << height << "value = " << value << std::endl;
}
