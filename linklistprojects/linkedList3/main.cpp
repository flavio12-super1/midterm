#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{

    // int arr[5] = {1, 2, 3, 4, 5};
    // int arr2[5] = {6, 7, 8, 9, 10};
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};

    LinkedList<int> list0(arr, 5);
    LinkedList<int> list1(arr2, 5);

    list0.append(6);
    // list0.append(6);
    cout << list0 << endl;

    // list1.append(11);
    // list1.append(7);
    cout << list1 << endl;

    (list0.search(1)) ? cout << "found" << endl : cout << "not found" << endl;

    if (list0 == list1)
    {
        cout << "link0 == link1" << endl;
    }
    else
    {
        cout << "link0 != link1" << endl;
    }

    LinkedList<int> temp = list0;
    temp.append(7);
    temp.reverse();
    cout << temp << endl;

    if (temp == list0)
    {
        cout << "temp == link0" << endl;
    }
    else
    {
        cout << "temp != link0" << endl;
    }

    temp = list0 + list1;

    LinkedList<int> newTemp(temp);
    newTemp.append(7);
    cout << "-------------------------------" << endl;
    LinkedList<int> temp2 = newTemp - list0;
    cout << "temp2 = " << endl;
    cout << temp2 << endl;

    cout << "-------------------------------" << endl;

    cout << temp << endl;

    Link<int> link1(1);
    Link<int> link2(42);

    if (link1 == link2)
    {
        cout << "link1 == link2" << endl;
    }
    else
    {
        cout << "link1 != link2" << endl;
    }

    link1 = link2;
    cout << link1.data << endl;
    return 0;
}