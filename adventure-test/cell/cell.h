#ifndef CELL_H
#define CELL_H

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

    void ChangeWaterLevel(int val);
    void ChangeStoneLevel(int val);
    void ChangeDirtLevel (int val);
    void ChangeLavaLevel (int val);

    virtual void accept(Visitor& visitor);
    ~Cell();

private:
    friend CellState;
    void ChangeState(CellState*);

    CellState* state;
};

#endif // CELL_H
