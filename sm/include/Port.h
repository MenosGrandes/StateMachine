#ifndef PORT_H
#define PORT_H
#include <vector>
#include <algorithm>
#include <string>
#include "Signal.h"
class Port
{
public:
    Port() {}; //T type);
    virtual ~Port() {};
    bool actOnSignal(Signal * signal) const
    {
        auto foundSignal = std::find(begin(namesOfSignals),end(namesOfSignals),signal->name);
        if(foundSignal!= end(namesOfSignals))
        {
            return true;
        }
        return false;
    }

protected:

private:
    std::vector<std::string> namesOfSignals;

};

#endif // PORT_H
