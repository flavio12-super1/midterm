#ifndef Findmiddle
#define Findmiddle

int findMiddle(int arr[])
{
    int i = 0;

    while (true)
    {
        if (arr[i] != -1)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    int middle = i / 2;
    return arr[middle];
}

#endif