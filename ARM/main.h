/*
 * main.h
 *
 *  Created on: Jul 22, 2009
 *      Author: steven
 */


#ifndef MAIN_H_
#define MAIN_H_






#include <fcntl.h>
#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



//#include <sqlite3.h>
//#include "packet.h"
#include "Subroutine.h"


#define BAUDRATE B57600
#define PORT "/dev/ttyUSB0"

//int init_serial(int &fd);

#endif /* MAIN_H_ */