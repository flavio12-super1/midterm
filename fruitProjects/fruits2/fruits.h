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
std::ostream &operator<<(std::ostream &os, const FruitType<T> &fruit);

template <class T>
class Fruit
{
private:
public:
    FruitType<T> apples;
    FruitType<T> bananas;
    FruitType<T> oranges;
    Fruit() {}

    void inflate(T *&arr, int &count, int &capacity, string arrayName)
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
            std::cout << "old capacity: " << (capacity / 2) << " -> "
                      << "new capacity: " << capacity << " for array: " << arrayName << std::endl;
        }
    }

    void addFruit(T fruit)
    {
        if (fruit == "apple")
        {
            inflate(apples.items, apples.count, apples.capacity, "apples");
            string newFruit = "apple #" + to_string(apples.count + 1);
            apples.items[apples.count] = newFruit;
            apples.count++;
        }
        else if (fruit == "banana")
        {
            inflate(bananas.items, bananas.count, bananas.capacity, "bananas");
            string newFruit = "banana #" + to_string(bananas.count + 1);
            bananas.items[bananas.count] = newFruit;
            bananas.count++;
        }
        else if (fruit == "orange")
        {
            inflate(oranges.items, oranges.count, oranges.capacity, "oranges");
            string newFruit = "orange #" + to_string(oranges.count + 1);
            oranges.items[oranges.count] = newFruit;
            oranges.count++;
        }
    }
    friend std::ostream &operator<< <>(std::ostream &os, const FruitType<T> &fruit);
};

// Implement methods to interact with different fruit types

template <class T>
std::ostream &operator<<(std::ostream &os, const FruitType<T> &fruitType)
{
    os << "Fruit Items: ";
    for (int i = 0; i < fruitType.count; i++)
    {
        os << fruitType.items[i];
        if (i < fruitType.count - 1)
        {
            os << ", ";
        }
    }
    return os;
}

#endif
