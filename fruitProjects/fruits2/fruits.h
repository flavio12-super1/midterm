#ifndef FRUIT
#define FRUIT

#include <iostream>
#include <string>
using namespace std;

template <class T>
struct FruitType
{
    T *items;
    int count;
    int capacity;
    FruitType()
    {
        count = 0;
        capacity = 1;
        items = new T[capacity];
    }
};

template <class T>
class Fruit
{
private:
public:
    FruitType<T> apples;
    FruitType<T> bananas;
    FruitType<T> oranges;
    Fruit() {}

    void inflate(T *&arr, int &count, int &capacity)
    {
        if (count == capacity)
        {
            capacity = capacity * 2;
            T *temp = new T[capacity];
            for (int i = 0; i < count; i++)
            {
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        std::cout << "count: " << count << " capacity:" << capacity << std::endl;
    }

    void addFruit(T fruit)
    {
        if (fruit == "apple")
        {
            inflate(apples.items, apples.count, apples.capacity);

            apples.items[apples.count] = "apple";
            apples.count++;
        }
        else if (fruit == "banana")
        {
            bananas.count++;
        }
        else if (fruit == "orange")
        {
            oranges.count++;
        }
    }
};

#endif

// friend std::ostream &operator<< <>(std::ostream &os, const Fruit<T> &fruit);

// Implement methods to interact with different fruit types

// template <class T>
// std::ostream &operator<<(std::ostream &os, const Fruit<T> &fruit)
// {
//     for (int i = 0; i < fruit.count; i++)
//     {
//         os << fruit.items[i];
//         if (i < fruit.count - 1)
//         {
//             os << ", ";
//         }
//     }
//     return os;
// }
