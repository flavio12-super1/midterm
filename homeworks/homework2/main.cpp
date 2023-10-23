#include <iostream>
#include "ArrayList.h"
using namespace std;

int main()
{
    ArrayList<int> array;
    // ArrayList<int> array2;

    // array.append(69);
    // array.append(128);
    // array2.append(420);

    // cout << "array two size: " << array2.count << endl;
    // cout << array2.arr[0] << endl;

    // cout << "array size: " << array.count << endl;
    // cout << array.arr[0] << ", " << array.arr[1] << endl;
    array.prepend(1);
    array.prepend(2);
    array.prepend(3);
    array.prepend(4);
    array.prepend(5);

    // int value = array.removeFirst();
    // cout << "first value was removed: " << value << endl;
    array.removeFirst();
    int value = array.removeLast();
    cout << "last value was removed: " << value << endl;
    // array.removeFirst();
    // array.removeFirst();
    cout << array.capacity << endl;
    cout << "-------------------------------------------------" << endl;

    for (int i = 0; i < array.count; i++)
    {
        cout << array.arr[i] << "," << endl;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}