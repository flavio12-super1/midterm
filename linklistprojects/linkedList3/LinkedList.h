#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;

template <class T>
struct Link
{
    T data;
    Link<T> *next;
    Link<T> *prev;
    Link()
    {
        data = 0;
        next = nullptr;
        prev = nullptr;
    };

    Link(T value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    };

    bool operator==(const Link &other)
    {
        return data == other.data;
    }
};

template <class T>
class LinkedList
{
private:
public:
    Link<T> *front;
    Link<T> *back;
    int arrSize;

    LinkedList()
    {
        front = nullptr;
        back = nullptr;
        arrSize = 0;
    }

    LinkedList(T arr[], int size)
    {
        front = nullptr;
        back = nullptr;
        arrSize = 0;
        for (int i = 0; i < size; i++)
        {
            append(arr[i]);
        }
    }

    // Destructor
    ~LinkedList()
    {
        while (front != nullptr)
        {
            Link<T> *temp = front;
            front = front->next;
            delete temp;
        }
    }

    // Copy constructor
    LinkedList(const LinkedList &other)
    {
        // Initialize the new list as empty
        front = nullptr;
        back = nullptr;
        // arrSize = 0;
        arrSize = other.arrSize;

        // If the other list is empty, return immediately
        if (other.front == nullptr)
        {
            return;
        }

        // Create a new node for the first element in the other list
        front = new Link<T>(other.front->data);
        back = front;
        // arrSize = 1;

        // Initialize pointers for traversing both lists
        Link<T> *current = front;
        Link<T> *otherCurrent = other.front->next;

        // Copy the remaining elements from the other list
        while (otherCurrent)
        {
            current->next = new Link<T>(otherCurrent->data);
            current->next->prev = current;
            current = current->next;
            otherCurrent = otherCurrent->next;
            // arrSize++;
        }
        back = current;
    }
    LinkedList &operator=(const LinkedList &other)
    {
        if (this == &other)
        {
            return *this; // Avoid self-assignment
        }

        // Clear the current list
        while (front != nullptr)
        {
            Link<T> *temp = front;
            front = front->next;
            delete temp;
        }

        // Copy elements from the other list
        front = nullptr;
        back = nullptr;
        arrSize = other.arrSize;

        if (other.front != nullptr)
        {
            front = new Link<T>(other.front->data);
            back = front;

            Link<T> *current = front;
            Link<T> *otherCurrent = other.front->next;

            while (otherCurrent)
            {
                current->next = new Link<T>(otherCurrent->data);
                current->next->prev = current;
                current = current->next;
                otherCurrent = otherCurrent->next;
            }
            back = current;
        }

        return *this;
    }

    bool operator==(LinkedList<T> &other)
    {
        // return data == other.data;
        if (arrSize != other.arrSize)
        {
            return false;
        }
        while (front != nullptr && other.front != nullptr)
        {
            if (front->data != other.front->data)
            {
                return false;
            }
            front = front->next;
            other.front = other.front->next;
        }
        return true;
    }

    LinkedList &operator+(const LinkedList &other)
    {
        LinkedList<T> *temp = new LinkedList<T>(*this);
        Link<T> *curr = other.front;
        while (curr != nullptr)
        {
            temp->append(curr->data);
            curr = curr->next;
        }
        return *temp;
    }

    LinkedList &operator-(LinkedList &other)
    {
        LinkedList<T> *temp = new LinkedList<T>();
        Link<T> *curr = front;

        while (curr != nullptr)
        {
            bool remove = false;
            cout << curr->data;
            cout << "[ ";
            Link<T> *curr2 = other.front;
            while (curr2 != nullptr)
            {
                // cout << curr2->data << ",";
                cout << curr->data << " ?= " << curr2->data << ", ";
                if (curr->data == curr2->data)
                {
                    cout << " -> yes, ";
                    remove = true;

                    // Link<T> *oldCurr = curr;
                    // Link<T> *currPrev = curr->prev;
                    // Link<T> *currNext = curr->next;
                    // currPrev->next = currNext;
                    // currNext->prev = currPrev;

                    // Link<T> *oldCurr2 = curr2;
                    // Link<T> *currPrev2 = curr2->prev;
                    // Link<T> *currNext2 = curr2->next;
                    // currPrev2->next = currNext2;
                    // currNext2->prev = currPrev2;

                    // arrSize--;
                    // other.arrSize--;
                    // cout << curr->data << " == " << curr2->data << endl;
                }
                else
                {
                    cout << " -> no, ";
                    // temp->append(arrSize);
                }
                curr2 = curr2->next;
            }
            cout << " ]" << endl;
            if (!remove)
            {
                temp->append(curr->data);
            }
            // cout << curr->data << endl;
            curr = curr->next;
        }

        // for (int i = count; i < count; i++)
        // {
        //     if (curr != nullptr)
        //     {
        //         for (int j = other.count; j < other.count; j++)
        //         {
        //             if (curr2 != nullptr)
        //             {

        //                 curr2 = curr2->next;
        //             }
        //         }
        //     }
        //     curr = curr->next;
        // }

        // while (curr != nullptr)
        // {
        //     search()?
        //         temp->append(curr->data);
        //     curr = curr->next;
        // }
        // for (int i = 0; i<other.count;i++){
        //     if (curr != nullptr){
        //         if (!search(curr->data)){

        //         }
        //     }
        //     curr= curr->next;
        // }

        return *temp;
    }

    int &operator[](int index)
    {
        if (index < 0 || index >= arrSize)
        {
            throw std::logic_error("index out of bound");
        }
        Link<T> *curr = front;
        for (int i = 0; i < index; i++)
        {
            curr = curr->next;
        }
        return curr->data;
    }

    void append(T value)
    {
        if (front == nullptr)
        {
            front = new Link<T>(value);
            back = front;
            arrSize++;
        }
        else
        {
            Link<T> *temp = new Link<T>(value);
            temp->prev = back;
            back->next = temp;
            back = temp;
            arrSize++;
        }
    }

    void prepend(T value)
    {
        if (front == nullptr)
        {
            front = new Link<T>(value);
            back = front;
            arrSize++;
        }
        else
        {
            Link<T> *temp = new Link<T>(value);
            temp->next = front;
            front->prev = temp;
            front = temp;
            arrSize++;
        }
    }
    T removeFirst()
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
            T value = front->data;
            Link<T> *old = front;
            front = front->next;
            front->prev = nullptr;
            delete old;
            arrSize--;
            return value;
        }
    }

    T removeLast()
    {
        if (front == nullptr)
        {
            throw logic_error("nothing to remove");
        }
        else if (front == back)
        {
            T value = back->data;
            delete front;
            front = back = nullptr;

            arrSize--;
            return value;
        }
        else
        {
            T value = back->data;
            Link<T> *old = back;
            back = back->prev;
            back->next = nullptr;

            delete old;
            arrSize--;
            return value;
        }
    }

    bool search(T value)
    {
        Link<T> *temp = front;

        while (front != nullptr)
        {
            if (front->data == value)
            {
                return true;
            }
            front = front->next;
        }

        return false;
    }

    T peek()
    {
        if (front == nullptr)
            throw logic_error("nothing to peek at");
        return front->data;
    }
    // Add a public member function to access arrSize
    int size() const
    {
        return arrSize;
    }
    // check if array is empty
    bool isEmpty()
    {
        return arrSize == 0;
    }

    void reverse()
    {
        Link<T> *oldFront = front;
        front = back;
        back = oldFront;

        Link<T> *curr = front;
        while (curr != nullptr)
        {
            Link<T> *temp = curr->next;
            curr->next = curr->prev;
            curr->prev = temp;
            curr = curr->next;
        }
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