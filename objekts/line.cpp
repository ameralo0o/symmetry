//
// Created by mahmoud on 31/08/2021.
//

#include "line.h"

Line::Line() {}
void Line::draw(QPainter& painter) {
  if(pointB.x() == -1 )
    return;
  painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap));
  painter.setRenderHint(QPainter::Antialiasing,1);
  painter.drawLine(pointA,pointB);
};
void Line::add(QPointF point) {
  if(pointA.x() == -1 )
    pointA = point;
  else
    pointB = point;
}
void Line::clear() {

}
