//
// Created by mahmoud on 29/06/2021.
//

#ifndef SYMMETRY_PEN_H
#define SYMMETRY_PEN_H
#include <vector>
#include <tuple>
#include "objekts/state.h"

class Pen : public State{
private:
  std::vector< std::tuple<QPointF, QPointF> >  vector;

public:
    Pen();
    virtual void draw(QPainter& painter) override;
    virtual void add(QPointF pointA, QPointF pointB) override;
    virtual void clear()override;

};


#endif //SYMMETRY_PEN_H
