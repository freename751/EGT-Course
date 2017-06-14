/*
 * Shop.cpp
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */

#include "Shop.h"

Shop::Shop() {
	// TODO Auto-generated constructor stub

}

Shop::~Shop() {
	// TODO Auto-generated destructor stub
}

void Shop::readXML(const char* fileName) {
	pugi::xml_document doc;
	if (!doc.load_file(fileName)) {
		cout << "ERROR";
	}
	pugi::xml_node inventory = doc.first_child();

	for (pugi::xml_node item = inventory.first_child(); item;
			item = item.next_sibling()) {
		pugi::xml_attribute idattr = item.first_attribute();
		int id = idattr.as_int();
		pugi::xml_node data = item.first_child();
		string make = data.first_child().text().as_string();
		data = data.next_sibling();
		string model = data.first_child().text().as_string();
		data = data.next_sibling();
		int quantity = data.first_child().text().as_int();
		data = data.next_sibling();
		int serialnumber = data.first_child().text().as_int();
		data = data.next_sibling();

		Inventory obj(make, model, quantity, serialnumber);
		tech.push_back(obj);
		cout << obj.getModel() << endl;
		cout << endl;
		invMap[id] = obj;

		map<string, int> makeQuantity;
		if (makeQuantity.find(obj.getMake()) != makeQuantity.end()) {
			makeQuantity[obj.getMake()] += obj.getQuantity();
		} else {
			makeQuantity[obj.getMake()] = obj.getQuantity();
		}
	}

}
}

