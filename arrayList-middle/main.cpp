#include <iostream>
#include <string>
#include "FindMiddle.h"

using namespace std;

int main()
{

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1};

    int middle = findMiddle(arr);

    cout << "the middle element is: " << middle << endl;

    return 0;
}