#include "cell.h"
#include "stdlib.h"

#include <iostream>
#include <time.h>

#include <patterns/visitor.h>
#include <patterns/state.h>

Cell::Cell()
{
    value = rand() % 255;
    state = new State(this);
}

Cell::~Cell()
{
    //delete state;
}

//---------------
//Change matter functions
void Cell::ChangeMatterLevel(MatterType type, int val)
{
    state->ChangeMatterLevel(this, type, val);
}
//---------------

//---------------
//Getters
int Cell::GetDirtLevel() const
{
    return state->getDirt();
}

int Cell::GetLavaLevel() const
{
    return state->getLava();
}

int Cell::GetStoneLevel() const
{
    return state->getStone();
}

int Cell::GetWaterLevel() const
{
    return state->getWater();
}

void Cell::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void Cell::interact()
{
    //std::cout << "width = " << width << "height = " << height << "value = " << value << std::endl;
}
