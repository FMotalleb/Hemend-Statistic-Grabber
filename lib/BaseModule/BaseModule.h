
#ifndef BaseModule_h
#define BaseModule_h

#include "Arduino.h"
#include <String.h>
class BaseModule
{
public:
    BaseModule();
    void doCommand(String);
    void init();
    void update();

private:
};

#endif
