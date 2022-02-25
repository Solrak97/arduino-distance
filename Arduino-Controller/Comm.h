#include "Arduino.h"

struct Package
{
    //Header
    int size;
    int checksum;

    //Message
    char *body;

    //Constructor / Destructor
    Package(int size, char *body);
    ~Package();

    //Header config
    void setChecksum();
};



class Comm
{
private:
    int frequency;
    void setFrequency();

public:
    Comm(int frequency);
    ~Comm();

};