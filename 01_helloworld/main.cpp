#include<QApplication>
#include<QWidget>
#include<QLabel>
int main(int argc, char* argv[])
{
    QApplication app(argc,argv);
    QWidget* window = new QWidget();
    QLabel* label = new QLabel("Hello",window);
    label->move(0,150);
    window->setWindowTitle("First_App");
    window->setGeometry(0,0,500,300);
    window->show();
    return app.exec();
}
