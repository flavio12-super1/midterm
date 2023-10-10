#ifndef INFLATE_H
#define INFLATE_H

template <typename T>
class Container; // Forward declaration of the Container class
template <typename T>
void inflate(Container<T> &c)
{
    if (c.count == c.capacity)
    {
        c.capacity *= 2;
        T *temp = new T[c.capacity];
        for (int i = 0; i < c.count; i++)
        {
            temp[i] = c.contents[i];
        }
        delete[] c.contents;
        c.contents = temp;
    };
};

#endif
