#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include <QWidget>
#include <QBoxLayout>
#include <QLabel>
#include <QFont>
#include <QTextEdit>
#include "server_client.h"
#include <QScrollArea>
#include <QDateTime>
int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Server_Client *svrclt=new Server_Client();

    QWidget window;
    window.setWindowTitle("Server-Client");

    /****************************************************/

    /*MainLayout*/

    QHBoxLayout *mainlayout = new QHBoxLayout;

    /****************************************************/

    /*SERVER Part*/

    QVBoxLayout *layoutserver= new QVBoxLayout;

    QVBoxLayout *layoutserversettings= new QVBoxLayout;
    QHBoxLayout *layoutserversettingsaddr=new QHBoxLayout;
    QHBoxLayout *layoutserversettingsport=new QHBoxLayout;

    QHBoxLayout *layoutserverbutton=new QHBoxLayout;

    QHBoxLayout *layoutserverlabel=new QHBoxLayout;

    /*CLIENT Part*/

    QVBoxLayout *layoutclient= new QVBoxLayout;

    QVBoxLayout *layoutclientsettings= new QVBoxLayout;
    QHBoxLayout *layoutclientsettingsaddr=new QHBoxLayout;
    QHBoxLayout *layoutclientsettingsport=new QHBoxLayout;

    QHBoxLayout *layoutclientbutton=new QHBoxLayout;

    QHBoxLayout *layoutclientlabel=new QHBoxLayout;

    /****************************************************/

    /*MainLayout Part*/

    mainlayout->addLayout(layoutserver);
    mainlayout->addLayout(layoutclient);

    /*SERVER Part*/

    layoutserver->addLayout(layoutserversettings);
    layoutserver->addLayout(layoutserverbutton);
    layoutserver->addLayout(layoutserverlabel);

    layoutserversettings->addLayout(layoutserversettingsaddr);
    layoutserversettings->addLayout(layoutserversettingsport);


    /*CLIENT Part*/

    layoutclient->addLayout(layoutclientsettings);
    layoutclient->addLayout(layoutclientbutton);
    layoutclient->addLayout(layoutclientlabel);


    layoutclientsettings->addLayout(layoutclientsettingsaddr);
    layoutclientsettings->addLayout(layoutclientsettingsport);

    /****************************************************/

    /*SERVEUR Part*/

    QLabel *layoutserversettingsaddrlabel=new QLabel("address");
    QTextEdit *layoutserversettingsaddrtext=new QTextEdit("127.0.0.1");
    QLabel *layoutserversettingsportlabel=new QLabel("port");
    QTextEdit *layoutserversettingsporttext=new QTextEdit("8080");

    QPushButton *layoutserverbuttonstart=new QPushButton("start");
    QPushButton *layoutserverbuttonstop=new QPushButton("stop");

    QLabel *layoutserverlabellabel=new QLabel("");

    /*CLIENT Part*/

    QLabel *layoutclientsettingsaddrlabel=new QLabel("address");
    QTextEdit *layoutclientsettingsaddrtext=new QTextEdit("127.0.0.1");
    QLabel *layoutclientsettingsportlabel=new QLabel("port");
    QTextEdit *layoutclientsettingsporttext=new QTextEdit("8080");

    QPushButton *layoutclientbuttonstart=new QPushButton("start");
    QPushButton *layoutclientbuttonstop=new QPushButton("stop");

    QLabel *layoutclientlabellabel=new QLabel("");
    /****************************************************/

    /*SERVEUR Part*/

    layoutserversettingsaddr->addWidget(layoutserversettingsaddrlabel);
    layoutserversettingsaddr->addWidget(layoutserversettingsaddrtext);

    layoutserversettingsport->addWidget(layoutserversettingsportlabel);
    layoutserversettingsport->addWidget(layoutserversettingsporttext);

    layoutserverbutton->addWidget(layoutserverbuttonstart);
    layoutserverbutton->addWidget(layoutserverbuttonstop);

    //layoutserverlabel->addWidget(layoutserverlabellabel);

    /*CLIENT Part*/

    layoutclientsettingsaddr->addWidget(layoutclientsettingsaddrlabel);
    layoutclientsettingsaddr->addWidget(layoutclientsettingsaddrtext);

    layoutclientsettingsport->addWidget(layoutclientsettingsportlabel);
    layoutclientsettingsport->addWidget(layoutclientsettingsporttext);

    layoutclientbutton->addWidget(layoutclientbuttonstart);
    layoutclientbutton->addWidget(layoutclientbuttonstop);

    //layoutclientlabel->addWidget(layoutclientlabellabel);

    /****************************************************/

    /*SET FONT / POSITION / SIZE*/

    /*SERVEUR Part*/

    layoutserversettingsaddrlabel->setMinimumSize(300,15);
    layoutserversettingsaddrtext->setMinimumSize(300,15);

    layoutserversettingsportlabel->setMinimumSize(300,15);
    layoutserversettingsporttext->setMinimumSize(300,15);

    layoutserverbuttonstart->setMinimumSize(150,100);
    layoutserverbuttonstop->setMinimumSize(150,100);

    //layoutserverlabellabel->setMinimumSize(290,400);

    /*CLIENT Part*/

    layoutclientsettingsaddrlabel->setMinimumSize(300,15);
    layoutclientsettingsaddrtext->setMinimumSize(300,15);

    layoutclientsettingsportlabel->setMinimumSize(300,15);
    layoutclientsettingsporttext->setMinimumSize(300,15);

    layoutclientbuttonstart->setMinimumSize(150,100);
    layoutclientbuttonstop->setMinimumSize(150,100);

    //layoutclientlabellabel->setMinimumSize(290,400);

    QFont font;

    /*SERVEUR Part*/

    font = layoutserversettingsaddrlabel->font();
    font = layoutserversettingsportlabel->font();
    font = layoutserverlabellabel->font();

    /*CLIENT Part*/

    layoutclientsettingsaddrlabel->font();
    layoutclientsettingsportlabel->font();
    layoutclientlabellabel->font();

    font.setPointSize(16);

    layoutserversettingsaddrlabel->setFont(font);
    layoutserversettingsportlabel->setFont(font);
    layoutserverlabellabel->setFont(font);

    layoutclientsettingsaddrlabel->setFont(font);
    layoutclientsettingsportlabel->setFont(font);
    layoutclientlabellabel->setFont(font);

    layoutserversettingsaddrlabel->setAlignment(Qt::AlignCenter);
    layoutserversettingsportlabel->setAlignment(Qt::AlignCenter);

    layoutclientsettingsaddrlabel->setAlignment(Qt::AlignCenter);
    layoutclientsettingsportlabel->setAlignment(Qt::AlignCenter);

    /****************************************************/

    /*ScrollArea Part for Server and Client*/

    layoutserverlabellabel->setWordWrap(true);
    layoutserverlabellabel->setAlignment(Qt::AlignTop);

    layoutclientlabellabel->setWordWrap(true);
    layoutclientlabellabel->setAlignment(Qt::AlignTop);

    QScrollArea *scrollAreaServer = new QScrollArea;

    QScrollArea *scrollAreaClient = new QScrollArea;

    scrollAreaServer->setWidget(layoutserverlabellabel);
    scrollAreaServer->setWidgetResizable(true);
    //scrollArea->setFixedHeight(15);
    scrollAreaServer->setMinimumSize(300,400);
    scrollAreaServer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollAreaServer->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollAreaServer->scroll(5,5);

    scrollAreaClient->setWidget(layoutclientlabellabel);
    scrollAreaClient->setWidgetResizable(true);
    //scrollArea->setFixedHeight(15);
    scrollAreaClient->setMinimumSize(300,400);
    scrollAreaClient->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollAreaClient->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    layoutserverlabel->addWidget(scrollAreaServer);

    layoutclientlabel->addWidget(scrollAreaClient);

    /****************************************************/

    /*BUTTON FOR SERVER*/

    QObject::connect(layoutserverbuttonstart, &QPushButton::clicked, &window, [svrclt, layoutserverlabellabel](){
        QString currentText;
        currentText = layoutserverlabellabel->text();

        if(svrclt->ServerIsOpen()==true){
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("The server is already open") + "\n" + currentText;
            layoutserverlabellabel->setText(currentText);
        }
        else{
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("The server is already open") + "\n" + currentText;
            layoutserverlabellabel->setText(currentText);
            svrclt->OpenServer();
        }
    });

    QObject::connect(layoutserverbuttonstop, &QPushButton::clicked,&window,[svrclt,layoutserverlabellabel,layoutclientlabellabel]() {
        QString currentText;
        currentText = layoutserverlabellabel->text();
        if(svrclt->ServerIsOpen()==true){
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("The server is now close") + "\n" + currentText;
            layoutserverlabellabel->setText(currentText);
            if(svrclt->ClientIsConnected()==true){
                currentText = layoutclientlabellabel->text();
                currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("You're kicked from the server !") + "\n" + currentText;
                layoutclientlabellabel->setText(currentText);
            }
            svrclt->CloseServer();
        }
        else if(svrclt->ServerIsOpen()==false){
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("The server is already close") + "\n" + currentText;
            layoutserverlabellabel->setText(currentText);
        }
    });

    /*BUTTON FOR CLIENT*/

    QObject::connect(layoutclientbuttonstart, &QPushButton::clicked,&window, [svrclt,layoutclientlabellabel]() {
        QString currentText;
        currentText = layoutclientlabellabel->text();
        if(svrclt->ServerIsOpen()==true && svrclt->ClientIsConnected()==false){
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("You're connected to the server") + "\n" + currentText;
            layoutclientlabellabel->setText(currentText);
            svrclt->ConnectClient();
        }
        else if(svrclt->ServerIsOpen()==true && svrclt->ClientIsConnected()==true){
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("You're already connect to the server") + "\n" + currentText;
            layoutclientlabellabel->setText(currentText);
        }
        else if(svrclt->ServerIsOpen()==false){
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("You can't connect to the server, it's closed") + "\n" + currentText;
            layoutclientlabellabel->setText(currentText);
        }
    });

    QObject::connect(layoutclientbuttonstop, &QPushButton::clicked, &window,[svrclt,layoutclientlabellabel]() {
        QString currentText;
        currentText = layoutclientlabellabel->text();
        if(svrclt->ClientIsConnected()==true){
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("You're left from the server") + "\n" + currentText;
            layoutclientlabellabel->setText(currentText);
            svrclt->DisconnectClient();
        }
        else{
            currentText = QDateTime::currentDateTime().toString("hh:mm:ss") + QString::fromStdString(" : ") + QString::fromStdString("You arleady leave from the server") + "\n" + currentText;
            layoutclientlabellabel->setText(currentText);
        }
    });

    /****************************************************/

    window.setLayout(mainlayout);
    window.resize(600,600);
    window.show();

    return app.exec();
}
