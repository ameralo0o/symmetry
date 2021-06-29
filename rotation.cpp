//
// Created by mahmoud on 28/06/2021.
//

#include "rotation.h"

Rotation::Rotation(QPointF center): centerPoint(center) {}

double Rotation::angelInRadians(double angle){
  return angle * pi / halfAngle;
}

QPointF Rotation::toNormalCon(QPointF x) {
  return QPointF(x.x() - centerPoint.x(),
               x.y() - centerPoint.y());
}

QPointF Rotation::toOrginalCon(QPointF x) {
  return QPointF(x.x() + centerPoint.x(),
               x.y() + centerPoint.y());
}

QPointF Rotation::apply(QPointF point, double angle) {
  double angelRandians = angelInRadians(angle);
  QPointF NormalCon = toNormalCon(point);

  double sin = std::sin(angelRandians); // sin( winkel)
  sin = ((int) (sin * 1000) / 1000.0); //round(3)
  double cos = std::cos(angelRandians); //cos(winkel)
  cos = ((int) (cos * 1000) / 1000.0); //round(3)

  double x = NormalCon.x();
  double y = NormalCon.y();

  NormalCon.setX( x * cos - y * sin ); // x = x * cos alpha - y * sin alpha
  NormalCon.setY( x * sin + y * cos ) ;// y = x * sin + y * cos

  return toOrginalCon(NormalCon);
}
