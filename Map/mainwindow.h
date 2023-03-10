#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <osgQOpenGL/osgQOpenGLWidget>
#include <string>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

protected slots:
    void initWindow();

protected:
    osgQOpenGLWidget*   _pOsgQOpenGLWidget;
};
#endif // MAINWINDOW_H
