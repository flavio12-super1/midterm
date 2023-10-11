#ifndef FRUIT
#define FRUIT

#include <string>

template <class T>
class Fruit
{

private:
public:
    int apples;
    int bananas;
    int oranges;
    Fruit()
    {
        apples = 0;
        bananas = 0;
        oranges = 0;
    }

    void addFruit(T fruit)
    {
        // my logic here
        if (fruit == "apple")
        {
            apples++;
        }
        else if (fruit == "banana")
        {
            bananas++;
        }
        else if (fruit == "orange")
        {
            oranges++;
        }
    }
};

#endif
// #ifndef FRUIT
// #define FRUIT

// #include <string>

// template <class T>
// class Fruit
// {
// private:
//     int apples;
//     int bananas;

// public:
//     Fruit()
//     {
//         apples = 0;
//         bananas = 0;
//     }

//     void addFruit(T fruit)
//     {
//         // Implement your logic for adding fruit here
//     }
// };

// #endif
