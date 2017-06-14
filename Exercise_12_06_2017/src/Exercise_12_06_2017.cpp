//============================================================================
// Name        : Exercise_12_06_2017.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Inventory.h"
#include "Shop.h"

using namespace std;

int main() {
	Shop test;

	test.readXML("ShopData.xml");

	return 0;
}
