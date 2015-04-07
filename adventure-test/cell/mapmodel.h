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

    QString getStringValue(int width, int height);

    void run();

    QVector<QVector<Cell> > map;
    int height;
    int width;
};

#endif // MAPMODEL_H
