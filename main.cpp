
#include <QApplication>
#include <QLabel>
#include <QDialog>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    QDialog w;
    QLabel l(&w);
    l.setText("QT你好");
    l.show();
    w.show();
    return a.exec();
}
