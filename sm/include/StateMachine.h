#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include "State.h"



class StateMachine
{
    public:
        StateMachine(State * defaultState, std::function<void()> defaultFunction);
        virtual ~StateMachine();

    void addState(State * state)
    {
        possibleStates.emplace_back(state);
    }
    State * getCurrentState(void) const
    {
    return currentState;
    }
    void setCurrentState(State * state)
    {
    std::cout<< RED_BEGIN << "CURRENT STATE: \t"<<state->name << END<<std::endl;

    currentState = state;
    }
    bool actOnSignal(Signal * signal)
    {
        State * state = currentState->actOnSignal(signal);
        if(state!=nullptr)
        {

            setCurrentState(state);
            //currentState = state;
        }
        else
        {
        defaultFunction();
        setCurrentState(defaultState);
        }

    }
    std::vector<State*> possibleStates;
    State * currentState;
    State * defaultState;
    std::function<void()> defaultFunction;

};

#endif // STATEMACHINE_H
