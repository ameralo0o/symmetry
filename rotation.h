//
// Created by mahmoud on 28/06/2021.
//

#ifndef SYMMETRY_ROTATION_H
#define SYMMETRY_ROTATION_H
#include <QPointF>
#include <math.h>

class Rotation {
  private:
    QPointF centerPoint;
    const double pi = 3.141592653589793;
    const double halfAngle = 180;

    double angelInRadians(double angle);

    QPointF toNormalCon(QPointF x);
    QPointF toOrginalCon(QPointF x);

public:
    Rotation(QPointF center);
    QPointF apply(QPointF point, double angle);
};


#endif //SYMMETRY_ROTATION_H
