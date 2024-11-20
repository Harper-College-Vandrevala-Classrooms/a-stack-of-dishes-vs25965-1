#pragma once
#include "Dish.h"
#include <iostream> // Include for std::cout
using namespace std;

const int MAX_SIZE = 7;

class Stack {
private:
    Dish array[MAX_SIZE];
    int top; // Use an integer to track the top index

public:
    Stack(); // Constructor declaration
    bool empty();
    bool full();
    void push(Dish dish);
    Dish pop();
    Dish peek();
    int size();
};

