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
    fruitBasket.addFruit("orange");
    fruitBasket.addFruit("orange");

    cout << "number of apples: " << fruitBasket.apples.count << endl;

    cout << fruitBasket.apples << endl;
    cout << "number of bananas: " << fruitBasket.bananas.count << endl;
    cout << fruitBasket.bananas << endl;
    cout << "number of oranges: " << fruitBasket.oranges.count << endl;
    cout << fruitBasket.oranges << endl;

    return 0;
}

// for (int i = 0; i < fruitBasket.apples.count; i++)
// {
//     cout << fruitBasket.apples.items[i] << endl;
// }