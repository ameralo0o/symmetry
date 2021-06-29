//
// Created by mahmoud on 28/06/2021.
//

#include "GUI/mainwindow.h"


mainWindow::mainWindow(): QMainWindow(){
  GUI();
}

void mainWindow::GUI(){
  this->setWindowTitle("Symmetrie");
  this->setGeometry(150,150,width,height);
  this->setCentralWidget(widget);
  this->show();
}

int mainWindow::spawn(int argc , char * argv[]){
  QApplication app(argc, argv);
  mainWindow f;
  return app.exec();
}
