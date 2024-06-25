#include "dialog.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon appIcon;
    appIcon.addFile("/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_5/icons/16x16.png", QSize(16, 16));
    appIcon.addFile("/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_5/icons/32x32.png", QSize(32, 32));
    appIcon.addFile("/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_5/icons/64x64.png", QSize(64, 64));
    appIcon.addFile("/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_5/icons/128x128.png", QSize(128, 128));
//a.setWindowIcon(QIcon("./icons/64x64.png"));
    a.setWindowIcon(appIcon);
    Dialog w;
    w.show();
    return a.exec();
}
