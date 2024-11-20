#include "Stack.h"

// Constructor definition
Stack::Stack() {
    top = -1; // Initialize top to -1
}

bool Stack::empty() {
    return top == -1; // Stack is empty if top is -1
}

bool Stack::full() {
    return top == MAX_SIZE - 1; // Stack is full if top is at the last index
}

void Stack::push(Dish dish) {
    if (!full()) {
        array[++top] = dish; // Increment top and add the dish
    }
}

Dish Stack::pop() {
    if (!empty()) {
        return array[top--]; // Return the top dish and decrement top
    }
    else {
        throw runtime_error("Empty stack"); // Use runtime_error for exceptions
    }
}

Dish Stack::peek() {
    if (!empty()) {
        return array[top]; // Return the top dish without removing it
    }
    else {
        throw runtime_error("Empty stack"); 
    }
}

int Stack::size() {
    return top + 1; 
}