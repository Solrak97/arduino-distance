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


// Based on Arduino-Uno model specification
// There is just one Serial communication port
// yet, I'll make an attempt to support multiport 
// architecture
class Comm
{
private:
    int frequency;
    void setFrequency();

public:
    Comm(int frequency);
    ~Comm();

};