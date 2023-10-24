#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, char *argv[])
{

    LinkedList<int> nums;

    nums.append(2);
    nums.append(5);
    nums.append(7);
    // nums.removeFirst();
    // nums.removeLast();
    nums.removeLast();

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    cout << nums << endl;

    cout << "nums size: " << nums.size() << endl;

    return 0;
}
