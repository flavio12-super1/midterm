#include <iostream>
#include <string>

#include "LinkList.h"

int main()
{
    LinkList<int> list;

    list.append(5);
    list.append(10);
    list.append(15);
    {
        int x = list.removeFirst();
        cout << "x: " << x << endl;
    }

    {
        int x = list.removeLast();

        cout << "x: " << x << endl;
    }
    return 0;
}
