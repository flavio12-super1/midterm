#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

using namespace std;

int main()
{

    LinkedList<int> myArray;

    myArray.append(1);
    myArray.append(2);
    myArray.append(3);
    myArray.append(4);

    myArray.prepend(0);

    myArray.removeFirst();
    myArray.removeLast();
    // myArray.removeLast();
    // myArray.removeLast();
    myArray.isEmpty() ? cout << "array is empty" << endl : myArray.size() == 1 ? cout << "there is one item left in the array" << endl
                                                                               : cout << "array is not empty" << endl;

    cout << myArray << endl;
    cout << "array size equals: " << myArray.size() << endl;

    return 0;
}