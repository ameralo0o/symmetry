//
// Created by mahmoud on 29/06/2021.
//

#ifndef SYMMETRY_PENSTATE_H
#define SYMMETRY_PENSTATE_H
#include <vector>
#include <tuple>
#include "objekts/state.h"

class SymmetryDraw : public State{
private:
  std::vector< std::vector< std::tuple<QPointF, QPointF> > > vector;

public:
    SymmetryDraw();
    virtual void draw(QPainter& painter) override;
    virtual void add(QPointF pointA, QPointF pointB) override;
    virtual void clear() override;
    virtual void pop() override;
    virtual void newstep() override;

};


#endif //SYMMETRY_PENSTATE_H
