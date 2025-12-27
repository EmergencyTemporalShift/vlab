# --- Qt 6 Modules ---
QT += core gui widgets openglwidgets opengl widgets openglwidgets

# --- Headers and Sources ---
# FIXED: Changed editor.cpp to editor.h in HEADERS section
HEADERS     = glwidget.h \
              editor.h \
              set.h fset.h cset.h \
              item.h func.h contour.h createitemdlg.h \
              gallery.h \
              config.h Preferences.h mainwindow.h

SOURCES     = glwidget.cpp \
              main.cpp \
              editor.cpp \
              set.cpp fset.cpp cset.cpp \
              item.cpp func.cpp contour.cpp createitemdlg.cpp \
              gallery.cpp \
              config.cpp mainwindow.cpp resources.cpp Preferences.cpp

FORMS +=  Preferences.ui

CONFIG += debug
TARGET = gallery

RESOURCES += resources.qrc ../libs/misc/about.qrc

# --- Path and Library Logic ---
# FIXED: Set MY_BASE to '..' to match your vlab-main directory structure
MY_BASE = ..
MY_LIBS = misc directoryWatcher platform

# Include the search paths for headers (Fixes delete_recursive.h error)
INCLUDEPATH += . \
               $${MY_BASE}/libs/platform \
               $${MY_BASE}/libs/RA \
               $${MY_BASE}/libs/misc \
               $${MY_BASE}/libs/message \
               $${MY_BASE}/libs/directoryWatcher

# Link against the central hidden bucket we found
LIBS += -L$${MY_BASE}/.libraries -lplatform -lmessage -lmisc -lRA

include( $${MY_BASE}/common.pri )

# --- MacOS Specific Configuration ---
macx: {
    LIBS += -framework Carbon
    HEADERS +=        ../libs/misc/CocoaBridge.h
    OBJECTIVE_SOURCES +=    ../libs/misc/CocoaBridge.mm
    LIBS +=        -framework AppKit

    LOCALDIR = $$DESTDIR/gallery.app/Contents/Resources/English.lproj
    HELPDIR = $$DESTDIR/gallery.app/Contents/Resources/Gallery.help/Contents/Resources/English.lproj

    copyhelp.target = copyhelp
    copyhelp.commands = ( mkdir -p $$HELPDIR && mkdir -p $$LOCALDIR && cp -rf ../docs/VLABToolsManual.pdf $$HELPDIR &&  cp -rf ../docs/Quick_Help/GalleryQuickHelp.html $$HELPDIR  && cp -rf ../docs/files/*.* $$HELPDIR)

    QMAKE_EXTRA_TARGETS += copyhelp
    PRE_TARGETDEPS += copyhelp
}
