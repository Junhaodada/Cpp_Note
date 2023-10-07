#ifndef __B__
#define __B__
#include <iostream>
using namespace std;
class A;
class B
{

public:
    void callA(int x, A &a)
    {
        a.data = x;
        cout << a.data << endl;
    }
};
#endif