
#ifndef PACROMLIB_H
#define PACROMLIB_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <cstdio>
#include <cstdlib>

void error(const char *msg) ;


int createSocket() ;

void createPacket(char *, std::string, std::string) ;

#endif
