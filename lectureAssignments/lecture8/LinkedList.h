#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <ostream>
#include <stdexcept>
#include <string>

using namespace std;

template <class T>
struct Link
{

    T data;
    Link *next;
    Link *prev;

    Link()
    {
        data = 0;
        next = nullptr;
        prev = nullptr;
    }
    Link(T value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

template <class T>
class LinkedList
{
private:
    Link<T> *front;
    Link<T> *back;
    int arrSize;

public:
    LinkedList()
    {
        front = nullptr;
        back = nullptr;
        arrSize = 0;
    }

    void append(T value)
    {
        Link<T> *temp = new Link<T>(value);
        if (front == nullptr)
        {
            back = front = temp;
        }
        else
        {
            temp->prev = back;
            back->next = temp;
            back = temp;
        };

        arrSize++;
    }
    void prepend(T value)
    {
        Link<T> *temp = new Link<T>(value);
        if (front == nullptr)
            front = back = temp;
        temp->next = front;
        front->prev = temp;
        front = temp;
        arrSize++;
    }

    T removeFirst()
    {
        T value = (front != nullptr) ? front->data : throw logic_error("nothing to remove");
        Link<T> *old = front;
        if (front == back)
        {
            front = back = nullptr;
        }
        else
        {
            front = front->next;
            front->prev = nullptr;
        }
        arrSize--;
        delete old;
        return value;
    }

    T removeLast()
    {
        if (back == nullptr)
        {
            throw std::logic_error("nothing to remove");
        }
        T value = back->data;
        if (front == back)
        {
            delete front;
            front = back = nullptr;
            arrSize--;
        }
        else
        {
            Link<T> *old = back;
            back = back->prev;
            back->next = nullptr;
            delete old;
            arrSize--;
        }

        return value;
    }

    T peek()
    {
        if (front == nullptr)
            throw std::logic_error("nothing to peek at");
        return front->data;
    }

    int size() const
    {
        return arrSize;
    }

    template <class U>
    friend std::ostream &operator<<(std::ostream &os, const LinkedList<U> &list);
};

template <class T>
std::ostream &operator<<(std::ostream &os, const LinkedList<T> &list)
{
    Link<T> *curr = list.front;
    while (curr != nullptr)
    {
        os << curr->data;
        if (curr->next != nullptr)
        {
            os << ", ";
        }
        curr = curr->next;
    }
    return os;
}

#endif