#include <iostream>
#include <memory>
#include "Item.h"
#include "Store.h"
#include <algorithm>
using namespace std;

int main() {

	auto store = make_shared<Store>();
	auto items = store->GetAllItems();
	cout << "List of all the Store Items" << "\n";
	for_each(items.begin(), items.end(), [](std::pair<int,Item> p)
	{
		cout << "Item Index: " + std::to_string(p.first) + " Item: " + p.second.GetItemName() + "\n";
	});


	cout << endl;

}