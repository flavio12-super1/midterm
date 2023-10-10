// MyHeader.h

#ifndef MYHEADER_H
#define MYHEADER_H

template <typename T>
class Bag
{
public:
    Bag() : size(0) {}

    // Put an element into the bag
    void put(const T &element)
    {
        if (size < MAX_SIZE)
        {
            items[size++] = element;
        }
        else
        {
            // Handle the case when the bag is full (you can throw an exception or handle it in your preferred way)
        }
    }

    // Pick an element from the bag (remove and return)
    T pick()
    {
        if (size > 0)
        {
            T element = items[size - 1];
            size--;
            return element;
        }
        else
        {
            // Handle the case when the bag is empty (you can throw an exception or handle it in your preferred way)
            return T(); // Return a default value for demonstration purposes
        }
    }

private:
    static const int MAX_SIZE = 100; // Define the maximum size of the bag
    T items[MAX_SIZE];               // Array to store elements
    int size;                        // Current size of the bag
};

#endif // MYHEADER_H
