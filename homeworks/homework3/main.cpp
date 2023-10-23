#include <iostream>
#include "ArrayList.h"
#include "SortedList.h"

using namespace std;

int main()
{
    ArrayList<int> array;
    SortedList<int> sortedList;

    // array.append(1);
    // array.append(2);
    // array.append(3);
    // array.prepend(0);

    // for (int i = 0; i < array.count; i++)
    // {
    //     cout << array.arr[i] << endl;
    // }
    // cout << "-----------------------------------------" << endl;
    // {
    //     int value = array.removeFirst();
    //     cout << "removed the first value: " << value << endl;
    // }
    // cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
    // {
    //     int value = array.removeLast();
    //     cout << "removed the last value: " << value << endl;
    // }
    // cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
    // {
    //     int value = array.removeLast();
    //     cout << "removed the last value: " << value << endl;
    // }
    // cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;

    // for (int i = 0; i < array.count; i++)
    // {
    //     cout << array.arr[i] << endl;
    // }
    // cout << "-----------------------------------------" << endl;
    // cout << "array size: " << array.count << endl;
    // cout << "array capacity: " << array.capacity << endl;

    // sortedList.append(5);
    // sortedList.append(1);
    // sortedList.append(2);
    // sortedList.append(4);
    // sortedList.append(3);
    // sortedList.append(0);
    for (int i = 1; i <= 1000000; i++)
    {
        sortedList.append(i);
    }

    // for (int i = 0; i < sortedList.count; i++)
    // {
    //     cout << sortedList.arr[i] << endl;
    // }
    if (sortedList.search(-1))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}