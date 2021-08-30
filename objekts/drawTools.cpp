//
// Created by mahmoud on 30/08/2021.
//

#include "drawTools.h"
#include <iostream>

DrawTools::DrawTools() {
  this->state.reset(new Pen());
  //this->drawVector.push_back(state);
}


void DrawTools::setState(State* state){
  this->state.reset(new Pen());
}


void DrawTools::draw(QPainter& painter){
  std::cout << drawVector.size();
  for(auto &value : drawVector){
    value->draw(painter);
  }
  state->draw(painter);
}


void DrawTools::add(QPointF A, QPointF B){
  state->add(A,B);
}


void DrawTools::clear() {
  this->drawVector.clear();
}


void DrawTools::pop() {
  std::cout << drawVector.size();
  if(this->drawVector.size() > 0)
    this->drawVector.pop_back();
}


void DrawTools::newstep(){
  this->drawVector.push_back(state);
  this->state.reset(new Pen());
}
