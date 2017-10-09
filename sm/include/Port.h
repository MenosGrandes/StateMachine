#ifndef PORT_H
#define PORT_H
#include <unordered_map>
#include <algorithm>
#include <string>
#include <functional>
#include <iostream>
#include "Signal.h"
class State;
class Port
{
public:
    Port() {}; //T type);
    virtual ~Port() {};
    State * actOnSignal(Signal * signal) //PASKUDZTWO
    {
        auto found= mapOfPossibleSignals.find(signal->name);
        if(found!= end(mapOfPossibleSignals))
        {
            ((found->second).first)();
            return  ((found->second).second);
        }
        else
        {
        std::cout<<YELLOW_BEGIN<<"NIEOBSLUGIWANY SYGNAL! "<<signal->name<<END<<std::endl;
        return nullptr;
        }
    }
    void addPosibbleSignal(std::string signalName,std::function<void()> fun,State * state )
    {
        mapOfPossibleSignals.insert(std::make_pair(signalName,std::make_pair(fun,state)));
    }

private:
    std::unordered_map<std::string,std::pair< std::function<void()>,State *> > mapOfPossibleSignals;

};

#endif // PORT_H
