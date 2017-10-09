#ifndef SIGNAL_H
#define SIGNAL_H

#include <string>

class Signal
{
    public:
    Signal(std::string _name):name(_name)//T _type):type(_type)
    {
        //ctor
    }
    ~Signal()
    {

    }
    std::string name;

};

#endif // SIGNAL_H
