//
// Created by mahmoud on 29/06/2021.
//

#include "objekts/PenState.h"
#include <iostream>
SymmetryDraw::SymmetryDraw() {
  newstep();
}

void SymmetryDraw::draw(QPainter & painter){
  painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap));
  painter.setRenderHint(QPainter::Antialiasing,1);
  std::cout << vector.size() << " new sze.";
  for(auto & subVector : vector){
    for(auto & value: subVector){
      painter.drawLine(std::get<0>(value),
                       std::get<1>(value));
    }
  }
}

void SymmetryDraw::add(QPointF pointA, QPointF pointB) {
  size_t index = vector.size() -1;
  vector[index].push_back(std::make_tuple(pointA,pointB));
}

void SymmetryDraw::newstep() {
  vector.push_back(std::vector< std::tuple<QPointF, QPointF> > ());
}

void SymmetryDraw::clear() {
  vector.clear();

}

void SymmetryDraw::pop() {
  vector.pop_back();
}
