#include "Dish.h"

Dish::Dish(string description)
{
	this->description = description;
}
Dish::Dish()
{
	this->description = description;
}
string Dish::toString() {
    return description; // Returns the description of the dish
}