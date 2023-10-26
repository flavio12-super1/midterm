#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList<int> myArray;
    myArray.append(2);
    {
        int value = myArray.removeFirst();
        cout << "you have removed the first value: " << value << endl;
    }
    myArray.append(3);
    myArray.append(4);
    myArray.prepend(1);
    {
        int value = myArray.peek();
        cout << "the first item in the linked list: " << value << endl;
    }
    myArray.prepend(0);
    {
        int value = myArray.peek();
        cout << "the first item in the linked list: " << value << endl;
    }
    {
        int value = myArray.removeLast();
        cout << "you have removed the last value: " << value << endl;
    }

    cout << myArray.size() << endl;
    cout << myArray << endl;

    return 0;
}