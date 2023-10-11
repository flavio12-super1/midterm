#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size = 4;
    int *arr = new int[size];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    int *pointer = arr;

    cout << "value: " << *(pointer) << endl;
    cout << "address: " << pointer << endl;

    int newValue = 0;
    int newSize = size + 1;
    int *newArr = new int[newSize];

    for (int i = 1; i < newSize; i++)
    {
        newArr[i] = arr[i - 1];
    }
    newArr[0] = newValue;

    delete[] arr;
    arr = newArr;
    pointer = arr;

    cout << "value: " << *(pointer) << endl;
    cout << "address: " << pointer << endl;

    for (int i = 0; i < newSize; i++)
    {
        cout << "arr[" << i << "] value: " << *(pointer + i) << endl;
    }
    return 0;
}