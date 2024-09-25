#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include <QWidget>
#include <QBoxLayout>
#include <QLabel>
#include <QFont>
#include "Thread_Joinable.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Thread Call");

    QPushButton *button_start=new QPushButton("start");
    QPushButton *button_pause_unpause=new QPushButton("pause");
    QPushButton *button_stop=new QPushButton("stop");

    QLabel *label = new QLabel("");
    QFont font = label->font();

    QHBoxLayout *mainlayout = new QHBoxLayout;
    QVBoxLayout *layout_button= new QVBoxLayout;
    QVBoxLayout *layout_label= new QVBoxLayout;

    mainlayout->addLayout(layout_button);
    mainlayout->addLayout(layout_label);

    layout_button->addWidget(button_start);
    layout_button->addWidget(button_pause_unpause);
    layout_button->addWidget(button_stop);
    layout_label->addWidget(label);

    button_start->setMinimumSize(150,100);
    button_start->setMaximumSize(960,360);
    button_pause_unpause->setMinimumSize(150,100);
    button_pause_unpause->setMaximumSize(960,360);
    button_stop->setMinimumSize(150,100);
    button_stop->setMaximumSize(960,360);

    label->setMinimumSize(150,300);
    label->setMaximumSize(960,1080);
    label->setAlignment(Qt::AlignCenter);
    font.setPointSize(20);
    label->setFont(font);

    Thread_Joinable *thread=new Thread_Joinable(label);

    QObject::connect(button_start, &QPushButton::clicked, [thread]() {
        if(thread->Thread_Status()==0){
            thread->Thread_Start();
        }
        else{
            QMessageBox::information(nullptr, "Message", "You have tou stop the thread before call a new thread !");
        }
    });
    QObject::connect(button_pause_unpause, &QPushButton::clicked, [thread]() {
        if(thread->Thread_Status()==1){
            thread->Thread_Pause();
        }
        else if(thread->Thread_Status()==2){
            thread->Thread_UnPause();
        }
        else{
            QMessageBox::information(nullptr, "Message", "Thread not found");
        }
    });
    QObject::connect(button_stop, &QPushButton::clicked, [thread]() {
        if(thread->Thread_Status()==2 || thread->Thread_Status()==1){
            thread->Thread_Stop();
        }
        else{
            QMessageBox::information(nullptr, "Message", "You have to call a new thread before stop !");
        }
    });

    window.setLayout(mainlayout);
    window.resize(300,300);
    window.show();

    return app.exec();
}
