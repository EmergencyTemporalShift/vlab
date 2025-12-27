#ifndef __COLORS_H__
#define __COLORS_H__
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QColor>
#include <QString>
enum ColorEntry {
  Background = 0,
  Points,
  Segments,
  Curve,
  Grid,
  XAxis,
  YAxis,
  SelectedPoints,
  ButtonTitles,
  ButtonLabels,
  GridLabels,
  BackgroundEdit
};

void ReadColors(QString);
void ReadColors(std::string);
GLdouble *GetColor(ColorEntry);
QColor GetQColor(ColorEntry);
void setColor(ColorEntry i, QColor color);
const char *GetLabel(int i);
GLdouble GetColor(int i, int j);

#else
#error File already included
#endif
