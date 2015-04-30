#ifndef CELL_H
#define CELL_H

#include <defines/defines.h>

class Visitor;
class State;

typedef State CellState;

class Cell
{
public:
    Cell();

    int value;
    int index;
    int height;
    int width;

    void interact();

    void ChangeMatterLevel(MatterType, int);

    int GetWaterLevel() const;
    int GetStoneLevel() const;
    int GetDirtLevel () const;
    int GetLavaLevel () const;

    virtual void accept(Visitor& visitor);
    ~Cell();

private:
    friend CellState;
    void ChangeState(CellState*);

    CellState* state;
};

#endif // CELL_H
