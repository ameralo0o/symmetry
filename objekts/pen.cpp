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

void Pen::add(QPointF point) {
  if(tmp_point.x() == -1){
    tmp_point = point;
    return;
  }
  vector.push_back(std::make_tuple(point,tmp_point));
  tmp_point = point;
}

void Pen::clear(){
  this->vector.clear();
}