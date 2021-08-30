//
// Created by mahmoud on 29/06/2021.
//

#include "objekts/pen.h"
#include <iostream>
Pen::Pen() {}

void Pen::draw(QPainter & painter){
  painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap));
  painter.setRenderHint(QPainter::Antialiasing,1);
  for(auto & value : vector){
      painter.drawLine(std::get<0>(value),
                       std::get<1>(value));

  }
}

void Pen::add(QPointF pointA, QPointF pointB) {
  size_t index = vector.size() -1;
  vector.push_back(std::make_tuple(pointA,pointB));
}

void Pen::clear(){
  this->vector.clear();
}