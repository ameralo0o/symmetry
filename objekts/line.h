//
// Created by mahmoud on 31/08/2021.
//

#ifndef SYMMETRY_LINE_H
#define SYMMETRY_LINE_H

#include "state.h"
class Line: public State {
private:
    QPointF pointA = QPointF(-1,-1);
    QPointF pointB = QPointF(-1,-1);
public:

    Line();
    virtual void draw(QPainter& painter) override;
    virtual void add(QPointF point) override;
    virtual void clear() override;


};


#endif //SYMMETRY_LINE_H
