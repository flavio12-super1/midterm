#include <iostream>
#include <string>

using namespace std;

struct Container
{
    int *contents;
    int count;
    int capacity;

    Container()
    {
        count = 0;
        capacity = 1;
        contents = new int[capacity];
    }

    Container(const Container &other)
    {
        capacity = other.capacity;
        count = other.count;
        contents = new int[other.capacity];

        for (int i = 0; i < count; i++)
        {
            contents[i] = other.contents[i];
        }
    }

    Container &operator=(const Container &other)
    {
        count = other.count;
        for (int i = 0; i < count; i++)
        {
            contents[i] = other.contents[i];
        }
        return *this;
    }

    ~Container()
    {
        delete[] contents;
    }
};

int main()
{

    Container c1;
    c1.contents[0] = 5;
    c1.count = 1;

    Container c2(c1);
    c2.contents[0] = 100;

    cout << "c2[0] = " << c2.contents[0] << endl;
    cout << "c1[0] = " << c1.contents[0] << endl;

    return 0;
}
