#include <iostream>
#include "shape.h"

using namespace std;

int main()
{

    Rectangle r;

    r.length = 20;
    r.width = 30;

    cout << r.getArea() << endl;
    cout << r.getPerimeter() << endl;

    return 0;
}