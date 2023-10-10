#include <iostream>
#include <string>

using namespace std;

struct Container
{
    int count;
    int capacity;
    int *contents;

    Container()
    {
        count = 0;
        capacity = 4;
        contents = new int[capacity];
    }

    // Container(const Container &other)
    // {
    //     count = other.count;
    //     capacity = other.capacity;
    //     contents = new int[capacity];

    //     for (int i = 0; i < count; i++)
    //     {
    //         contents[i] = other.contents[i];
    //     }
    // }

    // Container &operator=(const Container &other)
    // {
    //     // Check for self-assignment
    //     if (this == &other)
    //     {
    //         return *this;
    //     }

    //     // Copy data from the other object
    //     count = other.count;
    //     capacity = other.capacity;

    //     // Allocate new memory and copy contents
    //     contents = new int[capacity];
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
    Container c1;
    c1.count = 2;
    c1.contents[0] = 5;
    c1.contents[1] = 10;

    Container c2 = c1;
    // c2 = c1;
    c2.contents[0] = 100;

    // Container c3 = c2;
    // c3.contents[0] = 69;

    // for (int i = 0; i < c3.count; i++)
    // {
    //     cout << c3.contents[i] << endl;
    // }

    cout << "--------------------------------" << endl;
    cout << "c2: " << endl;
    for (int i = 0; i < c2.count; i++)
    {
        cout << c2.contents[i] << endl;
    }

    cout << "--------------------------------" << endl;

    cout << "c1: " << endl;
    for (int i = 0; i < c1.count; i++)
    {
        cout << c1.contents[i] << endl;
    }

    cout << "--------------------------------" << endl;

    return 0;
}