#ifndef LINKLIST
#define LINKLIST

#include <string> // Include the <string> header to use the 'string' type
#include <iostream>
#include <ostream>
#include <stdexcept>

template <class T>
struct Link
{
    T data;
    Link *next;

    Link()
    {
        data = 0;
        next = nullptr;
    }

    Link(T data)
    {
        this->data = data;
        next = nullptr;
    }
};

template <class T>
class LinkedList
{
protected:
public:
    Link<T> *front;
    Link<T> *back;
    int count;
    LinkedList()
    {
        front = nullptr;
        count = 0;
    }

    void append(T value)
    {
        if (front == nullptr)
        {
            front = new Link<T>(value);
            back = front;
        }
        else
        {
            Link<T> *temp = new Link<T>(value);
            back->next = temp;
            back = temp;
        }
        count++;
        std::cout << value << std::endl;
    }

    void prepend(T value)
    {
        if (front == nullptr)
        {
            front = new Link<T>(value);
            back = front;
        }
        else
        {
            Link<T> *temp = new Link<T>(value);
            temp->next = front;
            front = temp;
        }
        count++;
    }

    void removeFirst()
    {
        if (!size())
            throw std::logic_error("nothing to remove");

        Link<T> *temp = front;
        front = front->next;

        if (front == nullptr)
        {
            back = front;
        }

        delete[] temp;
        count--;
    }

    void removeLast()
    {
        if (!size())
            throw std::logic_error("nothing to remove");

        if (front->next == nullptr)
        {
            // Special case: There is only one element in the list
            delete front;
            front = back = nullptr;
        }
        else
        {
            Link<T> *curr = front;
            while (curr->next->next != nullptr)
            {
                curr = curr->next;
            }

            Link<T> *temp = curr->next;
            curr->next = nullptr;
            back = curr;

            delete[] temp;
        }

        count--;
    }

    int size()
    {
        if (count > 0)
            return count;
        return false;
    }

    template <typename U> // Declare operator<< as a template function

    friend std::ostream &operator<<(std::ostream &os, const LinkedList<U> &list);
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const LinkedList<T> &list)
{
    Link<T> *curr = list.front;
    while (curr != nullptr)
    {
        os << curr->data;
        if (curr->next != nullptr)
            os << ", ";
        curr = curr->next;
    }

    return os;
}

#endif
