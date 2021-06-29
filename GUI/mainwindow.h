//
// Created by mahmoud on 28/06/2021.
//

#ifndef SYMMETRY_MAINWINDOW_H
#define SYMMETRY_MAINWINDOW_H


#include "centerWidget.h"
#include <QtWidgets>
#include <QMainWindow>
#include <QActionGroup>



class mainWindow: public QMainWindow{
private:
    int width= 900;
    int height = 600;
    QWidget *widget = new Widget (this,width,height);

public:
    mainWindow();
    void GUI();
    static int spawn(int argc , char * argv[]);
};


#endif //SYMMETRY_MAINWINDOW_H
