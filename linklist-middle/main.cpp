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

    LinkedList<int> list2(list);
    list2.append(4);
    list2.append(5);

    LinkedList<int> list3;
    list3 = list2;

    list3.append(7);
    list3.append(8);
    list3.insert(6, 6);

    cout << list << endl;
    cout << list.count << endl;

    cout << list2 << endl;
    cout << list2.count << endl;

    cout << list3 << endl;
    cout << list3.count << endl;

    return 0;
}

// list.prepend(4);

// list.removeFirst();
// list.removeLast();

// list.prepend(5);

// list.reverse();

// cout << "peaking into the link list: " << list.peak() << endl;

// cout << list << endl;
