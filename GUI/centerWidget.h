//
// Created by mahmoud on 28/06/2021.
//

#ifndef SYMMETRY_CENTERWIDGET_H
#define SYMMETRY_CENTERWIDGET_H

#include <QtWidgets>
#include <QMainWindow>
#include <QActionGroup>
#include <vector>
#include <iostream>
#include <tuple>
#include <stdint.h>

#include "objekts/state.h"
#include "objekts/PenState.h"
#include <memory>

class Widget:public QWidget{

/*
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    //void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *e) override;
    //void mouseDoubleClickEvent( QMouseEvent * e ) override;
    //void keyPressEvent(QKeyEvent *event)override;
*/
public:
    QPointF center;
    QMainWindow *parent;

    int width;
    int height;

    QPointF tmpPoint;

    std::shared_ptr<State> symmetryDraw;

    std::vector<std::shared_ptr<State>> drawVector;


    Widget(QMainWindow *parent,int width,int height):QWidget(parent),parent(parent), width(width-150),height(height-150){
      setting();
      center.setX(width/2);
      center.setY(height/2);
      gui();
    };

    void setting(){
      symmetryDraw.reset(new SymmetryDraw());
      drawVector.push_back(symmetryDraw);
    }

    void gui(){
      this->setStyleSheet("QWidget { background-color : white}");
      this->resize(width,height);
      this->show();
    }


    void mousePressEvent(QMouseEvent *e){
      tmpPoint.setX(e->x());
      tmpPoint.setY( e->y() );

    }
    void mouseMoveEvent(QMouseEvent *e){
      int x = e->x();
      int y = e->y();
      symmetryDraw->add(QPointF(x,y),tmpPoint);
      tmpPoint.setX(x);
      tmpPoint.setY(y);
      this->update();
    }

    void mouseReleaseEvent(QMouseEvent *event){

    }


    void paintEvent(QPaintEvent *e){
      QPainter painter(this) ;
      for(auto &value : drawVector){
        value->draw(painter);

      }
      /*
      float linienbreite = 2;


      painter.setPen(QPen(Qt::red, 5, Qt::SolidLine, Qt::RoundCap));
      painter.setRenderHint(QPainter::Antialiasing,1);
      painter.drawPoint(center.toQPoint());
      painter.setPen(QPen(Qt::red, 1, Qt::DotLine, Qt::RoundCap));
      for(size_t i = 0; i < distributionShowVector.size();i++){ // max 359
        painter.drawLine(std::get<0>(distributionShowVector[i]).toQPoint(),
                std::get<1>(distributionShowVector[i]).toQPoint());
      }
       */
    }

    void keyPressEvent(QKeyEvent *e) override{
      std::cout << e->key();
      if(e->key() == Qt::Key_Control){ //

      }
      if(e->key() == Qt::Key_Tab){ // Tab to delete all
        symmetryDraw->pop();
        std::cout << "32";
        this->update();
      }
    }

    void mouseDoubleClickEvent( QMouseEvent * e ){
      symmetryDraw->pop();

      this->update();
    }

};

#endif //SYMMETRY_CENTERWIDGET_H
