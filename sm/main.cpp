#include "include/StateMachine.h"
#include <iostream>

int main()
{

    Port * port_INIT_STATE = new Port();
    Port * port_PUT_1_STATE = new Port();
    Port * port_PUT_2_STATE = new Port();
    Port * port_PUT_3_STATE = new Port();
    Port * port_PUT_4_STATE = new Port();
    Port * port_PUT_5_STATE = new Port();
    Port * port_PUT_6_STATE = new Port();
    Port * port_PUT_7_STATE = new Port();

    State * state_INIT = new State("INIT");
    State * state_PUT_1 = new State("1_PUT");
    State * state_PUT_2 = new State("2_PUT");
    State * state_PUT_3 = new State("3_PUT");
    State * state_PUT_4 = new State("4_PUT");
    State * state_PUT_5 = new State("5_PUT");
    State * state_PUT_6 = new State("6_PUT");
    State * state_PUT_7 = new State("7_PUT");

    state_INIT->ports.push_back(port_INIT_STATE);
    state_PUT_1->ports.push_back(port_PUT_1_STATE);
    state_PUT_2->ports.push_back(port_PUT_2_STATE);
    state_PUT_3->ports.push_back(port_PUT_3_STATE);

    state_PUT_4->ports.push_back(port_PUT_4_STATE);

    state_PUT_5->ports.push_back(port_PUT_5_STATE);
    state_PUT_6->ports.push_back(port_PUT_6_STATE);
    state_PUT_7->ports.push_back(port_PUT_7_STATE);


    Signal * signal_INIT_STATE_PUT_1 = new Signal("1");
    Signal * signal_INIT_STATE_PUT_2 = new Signal("2");
    Signal * signal_INIT_STATE_PUT_5 = new Signal("5");

//WRZUCANIE 1
    port_INIT_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, JEST 1"<<END<<std::endl;},state_PUT_1);
    port_PUT_1_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, JEST 2"<<END<<std::endl;},state_PUT_2);
    port_PUT_1_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_2->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 2, JEST 3"<<END<<std::endl;},state_PUT_3);

    port_PUT_2_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, JEST 3"<<END<<std::endl;},state_PUT_3);
    port_PUT_3_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, JEST 4"<<END<<std::endl;},state_PUT_4);
    port_PUT_4_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, JEST 5"<<END<<std::endl;},state_PUT_5);
    port_PUT_5_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, JEST 6"<<END<<std::endl;},state_PUT_6);
    port_PUT_6_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, JEST 7"<<END<<std::endl;},state_PUT_7);
    port_PUT_7_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_1->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 1, WYDAJE NAPOJ"<<END<<std::endl;},state_INIT);
//WRZCUCANIE 2
    port_INIT_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_2->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 2, JEST 2"<<END<<std::endl;},state_PUT_2);
    port_PUT_2_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_2->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 2, JEST 4"<<END<<std::endl;},state_PUT_4);
    port_PUT_4_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_2->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 2, JEST 6"<<END<<std::endl;},state_PUT_6);
    port_PUT_6_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_2->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 2,JEST 8, JEST ZA DUZO"<<END<<std::endl;},state_INIT);
//WRZCUCANIE 5
    port_INIT_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_5->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 5, JEST 5"<<END<<std::endl;},state_PUT_5);
    port_PUT_5_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_5->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 5, JEST 10,ZA DUZO"<<END<<std::endl;},state_INIT);
    port_PUT_3_STATE->addPosibbleSignal(signal_INIT_STATE_PUT_5->name,[](){std::cout<<BLUE_BEGIN<<"WRZUCONA 5, JEST 8, JEST ZA DUZO"<<END<<std::endl;},state_INIT);


    StateMachine sm(state_INIT,[](){std::cout<<YELLOW_BEGIN<<"FUNKCJA DOMYSLNA!!!! BLAD"<<END<<std::endl;});


//WRZUCAM 1
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);
//    sm.actOnSignal(signal_INIT_STATE_PUT_1);

//WRZUCAM 2
//   sm.actOnSignal(signal_INIT_STATE_PUT_2);
//
//   sm.actOnSignal(signal_INIT_STATE_PUT_2);
//   sm.actOnSignal(signal_INIT_STATE_PUT_2);
//   sm.actOnSignal(signal_INIT_STATE_PUT_2);
//WRZUCAM 5
   sm.actOnSignal(signal_INIT_STATE_PUT_1);
   sm.actOnSignal(signal_INIT_STATE_PUT_1);
   sm.actOnSignal(signal_INIT_STATE_PUT_2);
   sm.actOnSignal(signal_INIT_STATE_PUT_5);


    return 0;
}
