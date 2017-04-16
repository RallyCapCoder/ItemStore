#pragma once
#include "Item.h"
#include <map>


class Store {
private:
	std::map<int, Item> itemStorage;
public:
	Store();
	~Store();
	Item GetItem(int);
	std::map<int, Item> GetAllItems();
	void StoreItem(int itemIndex, Item& itemToStore);
};