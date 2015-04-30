#include "mapmodel.h"

#include <QStringBuilder>

MapModel::MapModel()
{
    width = 10;
    height = 10;
    CreateMap(width, height);

}

MapModel::~MapModel()
{

}

bool MapModel::CreateMap(int width, int height)
{
    map.resize(width);

    for (int t = 0; t < width; ++t)
    {
        map[t].resize(height);
    }

    for (int t = 0; t < width; ++t)
    {
        for (int tt = 0; tt < height; ++tt)
        {
            map[t][tt].width = t;
            map[t][tt].height = tt;
        }
    }

    return true;
}

void MapModel::run()
{
    foreach (QVector<Cell> vector, map) {
        foreach (Cell cell, vector) {
            cell.interact();
        }
    }
}

QString MapModel::getStringValue(int width, int height)
{
    Cell* cell = &map[width][height];

    return QString( "Value " % QString::number(cell->value) % "\n"
                    "Water " % QString::number(cell->GetWaterLevel()) % "\n"
                    "Stone " % QString::number(cell->GetStoneLevel()) % "\n"
                    "Dirt "  % QString::number(cell->GetDirtLevel()) %  "\n"
                    "Lava "  % QString::number(cell->GetLavaLevel()) %  "\n");
}
