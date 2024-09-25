#ifndef SERVER_CLIENT_H
#define SERVER_CLIENT_H

class Server_Client
{
public:
    Server_Client();
    ~Server_Client();

    void OpenServer(){
        Server=true;
    };
    void CloseServer(){
        Server=false;
    };

    void ConnectClient(){
        Client=true;
    };
    void DisconnectClient(){
        Client=false;
    };

    bool ServerIsOpen(){
        return Server;
    };

    bool ClientIsConnected(){
        return Client;
    };
private:
    bool Server=false;
    bool Client=false;
};

#endif // SERVER_CLIENT_H
