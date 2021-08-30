//
// Created by mahmoud on 30/08/2021.
//


#ifndef SYMMETRY_DRAWTOOLS_H
#define SYMMETRY_DRAWTOOLS_H


#include "state.h"
#include "pen.h"

class DrawTools{
private:
    std::shared_ptr<State> state ;
    std::vector<std::shared_ptr<State>>  drawVector;
public:
    DrawTools();
    void setState(State* state);
    void add(QPointF pointA, QPointF pointB);
    void draw(QPainter& painter);
    void clear() ;
    void pop() ;
    void newstep();
};
#endif //SYMMETRY_DRAWTOOLS_H
