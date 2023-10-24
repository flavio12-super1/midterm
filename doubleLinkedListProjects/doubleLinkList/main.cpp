#include <iostream>

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    int displaySecondToLast()
    {
        Node *curr = head;
        while (curr->next->next != nullptr)
        {
            curr = curr->next;
        }

        int secondToLastValue = curr->data;

        return secondToLastValue;
    }

    int displaySecondNode()
    {
        return head->next->data;
    }
};

int main()
{
    DoublyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    list.display();

    int x = list.displaySecondToLast();
    std::cout << x << std::endl;

    int x2 = list.displaySecondNode();
    std::cout << x2 << std::endl;

    return 0;
}
