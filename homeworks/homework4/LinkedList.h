#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <ostream>
#include <stdexcept>

#include "ArrayList.h"
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node *next;

    Node()
    {
        T data = 0;
        next = nullptr;
    }

    Node(T data)
    {
        this->data = data;
        next = nullptr;
    }
};
template <typename T>
class LinkedList
{
    Node<T> *front;
    Node<T> *back;
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
        if (front == nullptr)
        {
            // Appending to an empty list
            front = new Node<T>(value);
            back = front;
        }
        else
        {
            // Appending to list with elements
            Node<T> *temp = new Node<T>(value);
            back->next = temp;
            back = temp;
        }
        arrSize++;
    }

    int &operator[](int index)
    {
        if (index < 0 || index >= arrSize)
        {
            throw std::logic_error("Index out of bounds");
        }
        Node<T> *temp = front;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    void prepend(T value)
    {
        if (front == nullptr)
        {
            // Prepending to an empty list
            front = new Node<T>(value);
            back = front;
        }
        else
        {
            // Prepending to a list with elements
            Node<T> *temp = new Node<T>(value);
            temp->next = front;
            front = temp;
        }
        arrSize++;
    }

    T removeFirst()
    {

        if (front == nullptr)
        {
            throw logic_error("Nothing to remove");
        }
        int value = front->data;
        Node<T> *old = front;
        front = front->next;
        delete old;
        if (front == nullptr)
        {
            back = front;
        }
        arrSize--;
        return value;
    }

    T removeLast()
    {
        if (front == nullptr)
        {
            throw logic_error("nothing to remove");
        }

        if (front == back)
        {
            T value = front->data;
            delete front;
            front = back = nullptr;
            arrSize--;
            return value;
        }
        else
        {
            Node<T> *curr = front;
            while (curr->next != back)
            {
                curr = curr->next;
            }
            Node<T> *old = back;
            T value = old->data;
            back = curr;
            back->next = nullptr;
            delete old;
            arrSize--;
            return value;
        }
    }

    int size() const
    {
        return arrSize;
    }

    template <typename U> // Declare operator<< as a template function

    friend std::ostream &operator<<(std::ostream &os, const LinkedList<U> &list);

    // The following 2 friend declarations must be present so the unit tests can run
    friend struct TestTemplates;
    friend struct TestRemoveMethods;
};
template <typename T>
std::ostream &operator<<(std::ostream &os, const LinkedList<T> &list)
{
    Node<T> *curr = list.front;
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