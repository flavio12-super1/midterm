#include <iostream>
#include <string>

#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main()
{
    LinkedList<int> myList;
    myList.append(69);
    myList.append(420);
    myList.prepend(0);

    {
        int value = myList.peek();
        cout << "the first item in the linked list is: " << value << endl;
    }
    {
        int value = myList.removeFirst();
        cout << "you have removed the first value: " << value << endl;
    }
    {
        int value = myList.removeLast();
        cout << "you have removed the last value: " << value << endl;
    }
    myList.isEmpty()
        ? cout << "Linked list is empty" << endl
        : (
              cout << "The size of the array is: " << myList.size() << endl,
              cout << myList << endl);

    return 0;
}