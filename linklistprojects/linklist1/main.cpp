#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{

    LinkedList<int> myList;

    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);

    myList.prepend(0);

    myList.removeFirst();
    myList.removeLast();

    cout << myList << endl;
    cout << myList.arrSize << endl;

    return 0;
}