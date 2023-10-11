#ifndef FINDMIDDLE_H
#define FINDMIDDLE_H

#include <string> // Include the <string> header to use the 'string' type
#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;
int findMiddle(int *arr)
{
    int i = 0;
    while (arr[i] != -1)
    {
        i++;
    }
    int middle = i / 2;
    return arr[middle];
}

#endif