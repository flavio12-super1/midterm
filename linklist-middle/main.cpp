#include <iostream>
#include <string>
#include "linklist.h"

#include <string> // Include the <string> header to use the 'string' type

using namespace std;

int main()
{
    LinkedList<int> list;

    list.append(0);
    list.append(1);
    list.append(2);
    list.append(3);

    list.prepend(4);

    list.removeFirst();
    list.removeLast();

    list.prepend(5);

    cout << list << endl;

    return 0;
}