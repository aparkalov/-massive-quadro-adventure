#include "visitor.h"

Visitor::Visitor()
{
}

void Visitor::visit(Cell &cell)
{
    cell.value += 1000;
}
