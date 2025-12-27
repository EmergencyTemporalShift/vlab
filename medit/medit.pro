TEMPLATE = app
# Remove 'qt' and 'opengl' from CONFIG; they are handled by the QT variable now
CONFIG  += c++17

SOURCES  = main.cpp mw.cpp mweditor.cpp mwviewer.cpp mwdialogs.cpp \
           colourpick.cpp colour.cpp resources.cpp
HEADERS  = mweditor.h mwviewer.h mw.h mwdialogs.h colourpick.h
TARGET   = medit

# --- QT 6 FIX START ---
# Add widgets (for QWidget) and openglwidgets (for QOpenGLWidget)
QT += widgets openglwidgets widgets openglwidgets
# --- QT 6 FIX END ---

macx: {
  LIBS += -framework Carbon
  SOURCES += mainwindow.cpp
  HEADERS += mainwindow.h
}

RESOURCES = medit.qrc ../libs/misc/about.qrc

MY_BASE  = ..
MY_LIBS  = misc
include( $${MY_BASE}/common.pri )

macx:{
  HEADERS += cocoabridge.h
  OBJECTIVE_SOURCES += cocoabridge.mm
  LIBS += -framework AppKit
}
# ... rest of the bundle logic ...
