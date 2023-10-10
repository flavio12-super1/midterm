#include "MyHeader.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    Bag<float> bag;
    bag.put(3.1);
    bag.put(4.1);
    float x = bag.pick();
    cout << "x = " << x << endl;
    return 0;
}