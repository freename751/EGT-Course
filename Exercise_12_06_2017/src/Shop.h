/*
 * Shop.h
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */

#ifndef SHOP_H_
#define SHOP_H_

#include <vector>


#include <map>
using namespace std;

#include "Inventory.h"
#include "pugixml.hpp"

class Shop {
public:

	vector <Inventory> tech;
	map <int ,Inventory> invMap;

	Shop();
	virtual ~Shop();

	void readXML(const char* fileName);

};

#endif /* SHOP_H_ */
