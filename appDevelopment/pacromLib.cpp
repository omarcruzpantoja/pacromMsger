#include "pacromLib.h"
void error(const char *msg)
{
    /*
     *  Input:
     *      msg - the message contained will be displayed in case of an error
     *
     *  Purpose:
     *      Exit the program and print function
     *
     *  Output:
     *      N/A
     */

    std::perror(msg);
    std::exit(0);
}

int createSocket(){
    /*
     * Input:
     *      N/A
     *
     * Purpose:
     *      This function will return an open and connected socket if the server
     *      is online and the port is open for connection
     *
     * Output:
     *      Will return the socket with the connection
     */

    //Declare needed variables
    struct sockaddr_in serv_addr;
    struct hostent *server;
    int sockfd ;
    int port = 8000;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    //Open socket
    if (sockfd < 0)
        error("ERROR opening socket");

    //Prepare server data
    //server = gethostbyname("192.168.1.");
    server = gethostbyname("127.0.0.1");
    if (server == NULL) {
        std::fprintf(stderr,"ERROR, no such host\n");
        std::exit(0);
    }

    //Prepare buffers
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr,
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length);
    serv_addr.sin_port = htons(port);

    //Create Socket and connect to server
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
       error("ERROR connecting" ) ;

    //Return the socket with its connection to the server
    return sockfd ;
}

void createPacket(char * query, std::string request, std::string data) {

    std::string requestBuffer = request + ":" +data ;
    strcpy(query, requestBuffer.c_str()) ;
}

