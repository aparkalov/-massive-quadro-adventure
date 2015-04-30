#ifndef STATE_H
#define STATE_H

#include <defines/defines.h>

class Cell;

class State
{
public:
    State(Cell* cell);
    State(Cell* cell, int water, int stone, int dirt, int lava);
    virtual ~State();

    virtual void ChangeMatterLevel(Cell*, MatterType, int);

    int getWater() const;
    int getStone() const;
    int getDirt()  const;
    int getLava()  const;

protected:
    void ChangeState(Cell*, State*);

    int water;
    int stone;
    int dirt;
    int lava;
};

#endif // STATE_H
