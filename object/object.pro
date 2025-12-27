TEMPLATE = app

# --- Qt 6 MODERNIZATION ---
QT += core gui widgets opengl openglwidgets widgets openglwidgets

# --- BUILD HYGIENE ---
UI_DIR = .ui
MOC_DIR = .moc
OBJECTS_DIR = .obj

SOURCES = object.cpp QTGLObject.cpp \
    auxMenuItem.cpp saveChanges.cpp \
    util.cpp labutil.cpp resources.cpp \
    MessageBox.cpp objectMessageBox.cpp \
    TransferObject.cpp newVersion.cpp directorywatcher.cpp \
    ImportExport.cpp FileConflict.cpp Preferences.cpp \
    mainwindow.cpp

HEADERS = QTGLObject.h PostExec.h Loader.h MessageBox.h \
    TransferObject.h newVersion.h directorywatcher.h \
    objectMessageBox.h util.h saveChanges.h object.h \
    labutil.h auxMenuItem.h ImportExport.h FileConflict.h \
    Preferences.h mainwindow.h

# --- FORMS ---
FORMS += ImportExport.ui \
         FileConflict.ui \
         Preferences.ui \
         ../libs/misc/UI_RALogin.ui

TARGET = object

# --- PATHS AND LIBRARIES ---
# --- PATHS AND LIBRARIES ---
MY_BASE = ..

INCLUDEPATH += . \
               .ui \
               $${MY_BASE}/libs/platform \
               $${MY_BASE}/libs/RA \
               $${MY_BASE}/libs/misc \
               $${MY_BASE}/libs/message \
               $${MY_BASE}/libs/vlabd

# REORDERED LIBS:
# High-level logic (RA/vlabd) -> Utilities (message/misc) -> OS/Sockets (platform)
LIBS += -L$${MY_BASE}/.libraries \
        -lRA \
        -lvlabd \
        -lmessage \
        -lmisc \
        -lplatform

include( $${MY_BASE}/common.pri )
RESOURCES = object.qrc ../libs/misc/about.qrc

# --- MAC SPECIFIC ---
macx: {
  LIBS += -framework Carbon
  object_quick_install.path = ../Distribution/vlab-5.0.0/browser.app/Contents/System/
  object_quick_install.files = ../.binaries/object.app
  INSTALLS += object_quick_install
}

!isEmpty(MAKE_BUNDLE) {
  LOCALDIR = $$DESTDIR/object.app/Contents/Resources/English.lproj
  HELPDIR = $$DESTDIR/object.app/Contents/Resources/Object.help/Contents/Resources/English.lproj

  copyhelp.target = copyhelp
  copyhelp.commands = mkdir -p $$HELPDIR && cp -f ../docs/VLABFramework.pdf $$HELPDIR && cp -rf ../docs/files/*.* $$HELPDIR
  info_list.target = info_list
  info_list.commands = cp Info.plist $$DESTDIR/object.app/Contents/
  doc_info_list.target = doc_info_list

  QMAKE_EXTRA_TARGETS += copyhelp info_list doc_info_list
  PRE_TARGETDEPS += copyhelp info_list doc_info_list
}
