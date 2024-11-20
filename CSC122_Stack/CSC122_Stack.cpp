#include "Stack.h"
#include "Dish.h"

#include <iostream>
using namespace std;

int main()
{
    Dish dish1("Blue dish");
    Dish dish2("Green dish");
    Dish dish3("Purple dish");
    Dish dish4("pink dish");
    Dish dish5("white dish");

    Stack mystack;

    cout << "\nInitial size: " << mystack.size();
    mystack.push(dish1);
    mystack.push(dish2);
    mystack.push(dish3);
    mystack.push(dish4);
    mystack.push(dish5);
    cout << "\nUpdated size size: " << mystack.size();
    Dish pekk = mystack.peek();
    cout << "\nLast element: " << pekk.toString();
    mystack.pop();
    cout << "\nUpdated size size: " << mystack.size();
    Dish pekk1 = mystack.peek();
    cout << "\nLast element: " << pekk1.toString();
    return 0;
}
