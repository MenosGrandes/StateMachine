#include "../include/StateMachine.h"

StateMachine::StateMachine(State * _defaultState, std::function<void()> _defaultFunction)
{

    addState(_defaultState);
    setCurrentState(_defaultState);
    defaultState = _defaultState;
    defaultFunction = _defaultFunction;


}

StateMachine::~StateMachine()
{
    //dtor
}
