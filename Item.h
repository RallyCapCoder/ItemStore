#pragma once
#include <string>
#include <map>
#include <vector>
class Item
{
private:
	int itemCost;
	std::string itemName;
	
public:
	Item();
	Item(std::string name,int cost);
	std::string GetItemName();
	void ChangeItemCost(Item& itemToChange, int newCost);
	~Item();
};

