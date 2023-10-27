#include <iostream>
#include "ArrayList.h"
using namespace std;

int main()
{

    ArrayList<int> array0;
    array0.append(1);
    array0.append(2);
    array0.prepend(0);
    ArrayList<int> array1;
    // ArrayList<int> array2;
    array1.append(1);
    array1.append(2);
    array1.append(3);

    ArrayList<int> array2;
    array2 = array1;
    array2.append(4);
    // array.append(69);
    // array.append(128);
    // array2.append(420);

    // cout << "array two size: " << array2.count << endl;
    // cout << array2.arr[0] << endl;

    // cout << "array size: " << array.count << endl;
    // cout << array.arr[0] << ", " << array.arr[1] << endl;
    array1.prepend(0);

    ArrayList<int> array3 = array2;
    array3.append(5);

    array1 = array3;
    // array.prepend(1);
    // array.prepend(2);
    // array.prepend(3);
    // array.prepend(4);
    // array.prepend(5);

    // // int value = array.removeFirst();
    // // cout << "first value was removed: " << value << endl;
    // array.removeFirst();
    // int value = array.removeLast();
    // cout << "last value was removed: " << value << endl;
    // // array.removeFirst();
    // // array.removeFirst();
    // cout << array.capacity << endl;
    // cout << "-------------------------------------------------" << endl;

    // for (int i = 0; i < array.count; i++)
    // {
    //     cout << array.arr[i] << "," << endl;
    // }
    cout << "-------------------------------------------------" << endl;
    cout << "array3 size: " << array3.count << endl;
    cout << "array3 capacity: " << array3.capacity << endl;
    cout << array3 << endl;

    cout << "-------------------------------------------------" << endl;
    cout << "array2 size: " << array2.count << endl;
    cout << "array2 capacity: " << array2.capacity << endl;
    cout << array2 << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "array1 size: " << array1.count << endl;
    cout << "array1 capacity: " << array1.capacity << endl;
    cout << array1 << endl;

    cout << "-------------------------------------------------" << endl;
    cout << "array0 size: " << array0.count << endl;
    cout << "array0 capacity: " << array0.capacity << endl;
    cout << array0 << endl;

    cout << "-------------------------------------------------" << endl;

    array0.removeFirst();
    array1.removeLast();
    array2.removeFirst();
    array3.removeLast();

    cout << "removing first and last to arrays: " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "array3 size: " << array3.count << endl;
    cout << "array3 capacity: " << array3.capacity << endl;
    cout << array3 << endl;

    cout << "-------------------------------------------------" << endl;
    cout << "array2 size: " << array2.count << endl;
    cout << "array2 capacity: " << array2.capacity << endl;
    cout << array2 << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "array1 size: " << array1.count << endl;
    cout << "array1 capacity: " << array1.capacity << endl;
    cout << array1 << endl;

    cout << "-------------------------------------------------" << endl;
    cout << "array0 size: " << array0.count << endl;
    cout << "array0 capacity: " << array0.capacity << endl;
    cout << array0 << endl;

    cout << "-------------------------------------------------" << endl;

    return 0;
}