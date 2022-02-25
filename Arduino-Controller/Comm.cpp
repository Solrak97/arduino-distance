#include "Comm.h"


/* 
===========================================================
                    Package Section
===========================================================
*/
Package::Package(int size, char *body)
{
    this->size = size;
    this->body = body;
}

Package::~Package()
{
    delete this->body;
}

void Package::setChecksum()
{
    int sum = 0;
    for (int i = 0; i < this->size; i++)
    {
        sum += this->body[i];
    }
    this->checksum = sum;
}




/* 
===========================================================
                    Communication Section
===========================================================
*/

Comm::Comm(int frequency){
    this->frequency = frequency;
}