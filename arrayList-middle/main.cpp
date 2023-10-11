#include <iostream>
#include <string>
#include "findMiddle.h"

using namespace std;

int main()
{
    int size = 10;
    int arr[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1};

    int middle = findMiddle(arr);

    cout << "the middle element is: " << middle << endl;

    return 0;
}