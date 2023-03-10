#include "mainwindow.h"
#include <osgViewer/Viewer>
#include <osg/Node>
#include <osgEarth/MapNode>
#include <osgDB/ReadFile>
#include <osgEarth/EarthManipulator>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    osgEarth::initialize();
    _pOsgQOpenGLWidget = new osgQOpenGLWidget(this);
    _pOsgQOpenGLWidget->setGeometry(this->geometry());

    connect(_pOsgQOpenGLWidget, SIGNAL(initialized()), this, SLOT(initWindow()));
}

MyWidget::~MyWidget()
{
    if(_pOsgQOpenGLWidget != NULL)
        delete _pOsgQOpenGLWidget;
}

void MyWidget::initWindow()
{
    osgViewer::Viewer* pViewer = _pOsgQOpenGLWidget->getOsgViewer();
    pViewer->setCameraManipulator(new osgEarth::EarthManipulator());
    osg::Node* node = osgDB::readNodeFile("../resource/world.earth");
    pViewer->setSceneData(node);
}
