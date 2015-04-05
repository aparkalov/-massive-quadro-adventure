#include "mapmodel.h"

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
    int val = map[width][height].value;
    return QString::number(val);
}
