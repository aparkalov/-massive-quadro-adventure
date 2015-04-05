#ifndef MAPMODEL_H
#define MAPMODEL_H

#include <QVector>
#include <QString>
#include "cell.h"

class MapModel
{
public:
    MapModel();
    ~MapModel();

    bool CreateMap(int width, int height);
    QVector<QVector<Cell> > map;
    int height;
    int width;

    QString getStringValue(int width, int height);
    void run();
};

#endif // MAPMODEL_H
