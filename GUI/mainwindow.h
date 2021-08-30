//
// Created by mahmoud on 28/06/2021.
//

#ifndef SYMMETRY_MAINWINDOW_H
#define SYMMETRY_MAINWINDOW_H


#include "centerWidget.h"
#include <QtWidgets>
#include <QMainWindow>
#include <QActionGroup>
#include "objekts/drawTools.h"

#include <memory>

class mainWindow: public QMainWindow{
protected:
    void keyPressEvent(QKeyEvent *e) override;
private:
    std::shared_ptr<DrawTools> drawTool = std::make_shared<DrawTools>( DrawTools());
    int width= 900;
    int height = 600;
    QWidget *widget = new Widget (this,drawTool,width,height);



public:
    mainWindow();
    void GUI();
    static int spawn(int argc , char * argv[]);
};


#endif //SYMMETRY_MAINWINDOW_H
