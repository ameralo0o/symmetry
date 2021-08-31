//
// Created by mahmoud on 29/06/2021.
//

#ifndef SYMMETRY_STATE_H
#define SYMMETRY_STATE_H

#include <QPointF>
#include <QPainter>

class State{
public:
    virtual void draw(QPainter& painter) = 0;
    virtual void add(QPointF point)= 0;
    virtual void clear()= 0;
};
#endif //SYMMETRY_STATE_H
