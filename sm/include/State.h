#ifndef STATE_H
#define STATE_H
#include "Port.h"

class State
{
    public:
        State();
        virtual ~State();

    protected:

    private:
        std::vector<Port*> ports;
};

#endif // STATE_H
