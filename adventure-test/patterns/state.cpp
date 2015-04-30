#include "state.h"
#include <cell/cell.h>
#include <iostream>

State::State(Cell *cell)
    :
        water(100),
        stone(100),
        dirt(100),
        lava(100)

{
    cell->value = water + lava + dirt + stone;
}

State::State(Cell *cell, int water, int stone, int dirt, int lava)
    :
        water(water),
        stone(stone),
        dirt (dirt),
        lava (lava)
{
    cell->value = water + lava + dirt + stone;
}

State::~State()
{
}

// ---------------------
// These methods must change overall value of cell and particular value of some matter.
void State::ChangeMatterLevel(Cell *cell, MatterType type, int val)
{
    int* ptr = nullptr;

    switch (type) {
    case WATER:
        ptr = &this->water;
        break;
    case DIRT:
        ptr = &this->dirt;
        break;
    case STONE:
        ptr = &this->stone;
        break;
    case LAVA:
        ptr = &this->lava;
        break;
    default:
        std::cout << "Value "<< type << " is not implemented." << std::endl;
        return;
    }

    *ptr += val;
    if (*ptr < 0) {
        val -= *ptr;
        *ptr = 0;
    }

    cell->value += val;
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

