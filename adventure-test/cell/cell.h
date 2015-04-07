#ifndef CELL_H
#define CELL_H

class Visitor;

class Cell
{
public:
    Cell();

    int value;
    int index;
    int height;
    int width;

    void interact();

    virtual void accept(Visitor& visitor);
    ~Cell();
};

#endif // CELL_H
