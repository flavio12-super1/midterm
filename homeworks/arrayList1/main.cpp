#include <iostream>
#include <string>
// #include <iomanip> // Include the <iomanip> header for formatting

#include "ArrayList.h"

using namespace std;

int main()
{
    int x;
    int y;

    char symbol;
    bool operationState = false;
    cout << "please enter your first number" << endl;
    cin >> x;
    cout << "please enter your second number" << endl;
    cin >> y;

    while (!operationState)
    {
        cout << "please enter an operation symbol: + - * /" << endl;
        cin >> symbol;

        if (symbol == '+')
        {
            cout << add(x, y) << endl;
            operationState = true;
        }
        else if (symbol == '-')
        {
            cout << sub(x, y) << endl;
            operationState = true;
        }
        else if (symbol == '*')
        {
            cout << mult(x, y) << endl;
            operationState = true;
        }
        else if (symbol == '/')
        {
            cout << divFunction(x, y) << endl;

            operationState = true;
        }
        else
        {
            cout << "invalid symbol please try again" << endl;
        }
    }

    return 0;
}