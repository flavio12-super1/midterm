#ifndef ARRAYLIST
#define ARRAYLIST

#include <iostream>
#include <string>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}
float divFunction(int x, int y)
{
    float result = double(x) / y;
    cout << "result: " << result << endl;
    return result;
}
int mult(int x, int y)
{
    return x * y;
}
#endif