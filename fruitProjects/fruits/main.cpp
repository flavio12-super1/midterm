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

    cout << "number of apples: " << fruitBasket.apples << endl;
    cout << "number of bananas: " << fruitBasket.bananas << endl;
    cout << "number of oranges: " << fruitBasket.oranges << endl;

    return 0;
}
