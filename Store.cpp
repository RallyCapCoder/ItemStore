#include <iostream>
#include <memory>
#include "Item.h"
#include "Store.h"
using namespace std;

Store::Store()
{
	itemStorage.insert(std::pair<int, Item>(0, Item("Health Potion", 100)));
	itemStorage.insert(std::pair<int, Item>(1, Item("Mana Potion", 50)));
	itemStorage.insert(std::pair<int, Item>(2, Item("Phoenix Down", 500)));
}

Store::~Store()
{
	
}

Item Store::GetItem(int index)
{
	return itemStorage[index];
}

std::map<int, Item> Store::GetAllItems()
{
	return itemStorage;
}

void Store::StoreItem(int itemIndex, Item& itemToStore)
{
	itemStorage.insert(std::pair<int, Item>(itemIndex, itemToStore));
}
