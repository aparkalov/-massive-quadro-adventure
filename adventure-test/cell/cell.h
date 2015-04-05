#ifndef CELL_H
#define CELL_H


class Cell
{
public:
    Cell();
    int value;
    int index;
    int height;
    int width;
    void interact();
    ~Cell();
};

#endif // CELL_H
