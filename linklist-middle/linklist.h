#ifndef LINKLIST
#define LINKLIST

#include <string> // Include the <string> header to use the 'string' type
#include <iostream>
#include <ostream>
#include <stdexcept>

template <typename T>
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

    // Link(const Link &other)
    // {
    //     Link *temp = other.front;
    //     while (temp != nullptr)
    //     {
    //         append(temp->data);
    //         temp = temp->next;
    //     }
    // }
};

template <typename T>
class LinkedList
{
protected:
public:
    Link<T> *front;
    Link<T> *back;
    int count;
    //--------------------------------------------
    // defining the constructor for
    LinkedList()
    {
        front = nullptr;
        count = 0;
    }
    //--------------------------------------------
    // Implement a deep copy constructor for the LinkedList class
    LinkedList(const LinkedList<T> &other)
    {
        front = nullptr;
        count = 0;

        Link<T> *temp = other.front;
        while (temp != nullptr)
        {
            append(temp->data);
            temp = temp->next;
        }
    }
    //--------------------------------------------
    // Implement a deep copy assignment operator for the LinkedList class
    LinkedList &operator=(const LinkedList<T> &other)
    {
        // Check for self-assignment
        if (this == &other)
        {
            return *this;
        }

        // Copy data from the other object
        count = other.count;

        // Allocate new memory and copy contents
        Link<T> *temp = other.front;
        while (temp != nullptr)
        {
            append(temp->data);
            temp = temp->next;
        }

        return *this;
    }
    //--------------------------------------------

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
        // std::cout << value << std::endl;
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

        delete temp;
        count--;
    }

    void removeLast()
    {

        if (front == nullptr)
            throw std::logic_error("nothing to remove");

        if (front->next == nullptr)
        {
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

            delete temp;
        }
        count--;
    }

    void reverse()
    {
        Link<T> *curr = front;
        Link<T> *prev = nullptr;
        Link<T> *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        front = prev;
    }

    void insert(int index, T value)
    {
        if (index < 0 || index > count)
            throw std::logic_error("invalid index");

        if (index == 0)
        {
            prepend(value);
            return;
        }

        if (index == count)
        {
            append(value);
            return;
        }

        Link<T> *curr = front;
        for (int i = 0; i < index - 1; i++)
        {
            curr = curr->next;
        }

        Link<T> *temp = new Link<T>(value);
        temp->next = curr->next;
        curr->next = temp;
        count++;
    }

    int
    peak()
    {
        if (front == nullptr)
            throw std::logic_error("nothing to peak");
        return front->data;
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
