/**
 * @file /src/main.cpp
 *
 * @brief Qt based gui.
 *
 * @date November 2010
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include "../include/ros_qt_demo/main_window.hpp"
#include <QTimer>
#include <QThread>
#include <QCoreApplication>
/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {

    /*********************
    ** Qt
    **********************/

    QApplication app(argc, argv);
    class1_ros_qt_demo::MainWindow w(argc,argv);
    w.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));

    int result = app.exec();

  return result;
}
