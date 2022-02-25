#   ~What used to be a distance sensor experiment~
Well, the project is no more a distance sensor, its more like an arduino testing ground at the moment.

I'm focused on working out a communication protocol between the arduino and my laptop but lazed a lot on my networking lessons so I'll do it from scratch I guess

The idea is to send a C struct from the arduino to python, I'm atm having a headache from the architectural differences and size difference of types in both processors (type differences should be obvious after clearing up the architectural part), shouldn't be too hard to overcome in the next few days.

##  Communication Datagram
     *  2 bytes: message size
     *  2 bytes: message checksum
     *  n bytes: null terminated message