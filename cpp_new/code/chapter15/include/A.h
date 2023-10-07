#ifndef __A__
#define __A__
#include "B.h"
class A
{
public:
    // friend class B;
    friend void B::callA(int x, A &a);

private:
    int data;
};
#endif