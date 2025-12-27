TEMPLATE = app
# Remove 'opengl' from CONFIG as it is handled by QT variable
CONFIG  += c++17

SOURCES  = ctrl.cpp colors.cpp file.cpp functask.cpp glutils.cpp gridtask.cpp \
           gridview.cpp main.cpp model.cpp namedlg.cpp resources.cpp mainwindow.cpp \
           Preferences.cpp sampleDlg.cpp
HEADERS  = ctrl.h namedlg.h mainwindow.h Preferences.h sampleDlg.h
TARGET   = funcedit

# --- Qt 6 MODERNIZATION START ---
# Add widgets and the specific openglwidgets module
QT += core gui widgets openglwidgets widgets openglwidgets
# --- Qt 6 MODERNIZATION END ---

FORMS += Preferences.ui

# ... (keep macx and common.pri logic) ...

# Remove or comment out the old single 'opengl' line if it conflicts
# QT += opengl widgets openglwidgets

MY_BASE = ..

INCLUDEPATH += . \
    $${MY_BASE}/libs/platform \
    $${MY_BASE}/libs/RA \
    $${MY_BASE}/libs/misc \
    $${MY_BASE}/libs/message

# --- LINKER SECTION ---
# We point to the central hidden folder where your .a files live
LIBS += -L$${MY_BASE}/.libraries \
        -lplatform \
        -lmessage \
        -lmisc \
        -lRA
