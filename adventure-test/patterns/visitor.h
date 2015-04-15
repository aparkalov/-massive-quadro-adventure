#ifndef VISITOR_H
#define VISITOR_H

#include <cell/cell.h>

class Visitor
{
public:
    Visitor();

    void visit(Cell& cell);
};

#endif // VISITOR_H
