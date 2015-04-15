#include "cell.h"
#include "stdlib.h"

#include <iostream>
#include <time.h>

#include <patterns/visitor.h>
#include <patterns/state.h>

Cell::Cell()
{
    value = rand() % 255;
    state = new State();
}

Cell::~Cell()
{
    delete state;
}

//---------------
//Change matter functions
void Cell::ChangeDirtLevel(int val)
{
    state->ChangeDirt(this, val);
}

void Cell::ChangeWaterLevel(int val)
{
    state->ChangeWater(this, val);
}

void Cell::ChangeStoneLevel(int val)
{
    state->ChangeStone(this, val);
}

void Cell::ChangeLavaLevel(int val)
{
    state->ChangeLava(this, val);
}
//---------------

void Cell::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void Cell::interact()
{
    std::cout << "width = " << width << "height = " << height << "value = " << value << std::endl;
}
