#include "Item.h"
#include <string>
#include <iostream>

Item::Item()
{
}

Item::Item(std::string name, int cost)
{
	itemName = name;
	itemCost = cost;
}

std::string Item::GetItemName()
{
	return itemName;
}


void Item::ChangeItemCost(Item& itemToChange, int newCost) {
	itemToChange.itemCost = newCost;
	std::cout << "New cost of " + itemToChange.itemName + " is " + std::to_string(newCost);
}

Item::~Item()
{
}
