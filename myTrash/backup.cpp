#include <iostream>
#include "inflate.h"
#include <string>

using namespace std;

template <typename T>

struct Container
{
    int count;
    int capacity;
    T *contents;

    Container()
    {
        count = 0;
        capacity = 1;
        contents = new T[capacity];
    }

    // Container &operator=(const Container &other)
    // {
    //     // Check for self-assignment
    //     if (this == &other)
    //     {
    //         return *this;
    //     }

    //     // Free existing memory
    //     delete[] contents;

    //     // Copy data from the other object
    //     count = other.count;
    //     capacity = other.capacity;

    //     // Allocate new memory and copy contents
    //     contents = new T[capacity];
    //     for (int i = 0; i < count; i++)
    //     {
    //         contents[i] = other.contents[i];
    //     }

    //     return *this;
    // }

    ~Container()
    {
        delete[] contents;
    }
};

int main()

{

    Container<int> c1;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++)
    {
        inflate(c1);
        c1.contents[c1.count] = array[i];
        c1.count++;
    }
    cout << "---------------------------------" << endl;
    for (int i = 0; i < c1.count; i++)
    {
        cout << c1.contents[i] << endl;
    }
    cout << "- - - - - - - - - - - - - - - - -" << endl;
    cout << c1.capacity << endl;
    cout << "---------------------------------" << endl;

    // Container<string> c2;

    // string array2[10] = {
    //     "cat1",
    //     "cat2",
    //     "cat3",
    //     "cat4",
    //     "cat5",
    //     "cat6",
    //     "cat7",
    //     "cat8",
    //     "cat9",
    //     "cat10"};

    // for (int i = 0; i < 10; i++)
    // {
    //     inflate(c2);
    //     c2.contents[c2.count] = array2[i];
    //     c2.count++;
    // }

    // cout << "---------------------------------" << endl;
    // for (int i = 0; i < c2.count; i++)
    // {
    //     cout << c2.contents[i] << endl;
    // }

    // cout << "- - - - - - - - - - - - - - - - -" << endl;
    // cout << c2.capacity << endl;
    // cout << "---------------------------------" << endl;

    Container<int> c3 = c1;
    c3.contents[0] = 69;

    cout << "---------------------------------" << endl;
    for (int i = 0; i < c3.count; i++)
    {
        cout << c3.contents[i] << endl;
    }
    cout << "- - - - - - - - - - - - - - - - -" << endl;
    cout << c3.capacity << endl;
    cout << "---------------------------------" << endl;

    return 0;
}
