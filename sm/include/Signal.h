#ifndef SIGNAL_H
#define SIGNAL_H

#include <string>
#define RED_BEGIN "\033[1;31m"
#define END    "\033[0m"
#define BLUE_BEGIN "\033[1;34m"
#define YELLOW_BEGIN "\033[1;33m"
class Signal
{
    public:
    Signal(std::string _name):name(_name)//T _type):type(_type)
    {

    }
    ~Signal()
    {

    }
    std::string name;

};

#endif // SIGNAL_H
