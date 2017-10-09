#ifndef STATE_H
#define STATE_H
#include "Port.h"
#include <iostream>
class State
{
public:
    State(std::string name);
    virtual ~State();
    State * actOnSignal(Signal * signal)
    {
        for(auto p : ports)
        {
        State * nextState = p->actOnSignal(signal);
          if(nextState!= nullptr)
          {
            return nextState;
          }

        }
        return nullptr;
    }
    //if we know port
    bool actOnSignal(Signal * signal, int portIndex)
    {
        return ports.at(portIndex)->actOnSignal(signal);
    }
    std::vector<Port*> ports;
    std::string name;
};

#endif // STATE_H
