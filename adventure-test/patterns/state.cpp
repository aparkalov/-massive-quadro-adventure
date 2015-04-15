#include "state.h"

State::State()
{
}

State::~State()
{
}

// ---------------------
// These methods must change overall value of cell and particular value of some matter.
void State::ChangeDirt(Cell *cell, int val)
{
}

void State::ChangeWater(Cell *cell, int val)
{
}

void State::ChangeStone(Cell *cell, int val)
{
}

void State::ChangeLava(Cell *cell, int val)
{
}


// ---------------------
// Getters.
int State::getWater() const
{
    return water;
}
int State::getStone() const
{
    return stone;
}
int State::getDirt() const
{
    return dirt;
}
int State::getLava() const
{
    return lava;
}

