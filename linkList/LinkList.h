#include <iostream>
#include <string>

using namespace std;

template <typename T>
struct Link
{
    T data;
    Link *next;
};

template <typename T>
class LinkList
{
private:
    Link<T> *head;

public:
    LinkList()
    {
        head = nullptr;
    }

    void append(T value)
    {
        Link<T> *newLink = new Link<T>;
        newLink->data = value;
        newLink->next = nullptr;

        if (head == nullptr)
        {
            head = newLink;
        }
        else
        {
            Link<T> *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newLink;
        }
    }

    void prepend(T value)
    {
        Link<T> *newLink = new Link<T>;
        newLink->data = value;
        newLink->next = head;
        head = newLink;
    }

    int removeFirst()
    {
        if (head != nullptr)
        {
            Link<T> *temp = head;
            head = head->next;
            int result = temp->data;
            delete temp;
            return result;
        }
        else
        {
            // Return a default value (e.g., -1) when the list is empty
            return -1;
        }
    }

    int removeLast()
    {
        if (head != nullptr)
        {
            Link<T> *temp = head;
            Link<T> *prev = nullptr;
            while (temp->next != nullptr)
            {
                prev = temp;
                temp = temp->next;
            }
            int result = temp->data;
            delete temp;
            if (prev != nullptr)
            {
                prev->next = nullptr;
            }
            else
            {
                // If prev is nullptr, it means we are removing the head node
                head = nullptr;
            }
            return result;
        }
        else
        {
            // Return a default value (e.g., -1) when the list is empty
            return -1;
        }
    }
};