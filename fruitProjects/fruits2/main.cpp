#include <iostream>
#include "fruits.h"

using namespace std;

int main()
{

    Fruit<string> fruitBasket;

    fruitBasket.addFruit("banana");
    fruitBasket.addFruit("apple");
    fruitBasket.addFruit("orange");
    fruitBasket.addFruit("apple");

    cout << "number of apples: " << fruitBasket.apples.count << endl;
    for (int i = 0; i < fruitBasket.apples.count; i++)
    {
        cout << fruitBasket.apples.items[i] << endl;
    }
    // cout << fruitBasket.apples.items << endl;
    cout << "number of bananas: " << fruitBasket.bananas.count << endl;
    cout << "number of oranges: " << fruitBasket.oranges.count << endl;

    return 0;
}
