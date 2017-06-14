/*
 * Inventory.h
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <iostream>
#include <string>

using namespace std;

class Inventory {
public:
	Inventory(string make = "", string model = "", const int& quantity = 0,
			const int& serialNumber = 0);
	virtual ~Inventory();
	const string& getMake() const;
	void setMake(const string& make);
	const string& getModel() const;
	void setModel(const string& model);
	int getQuantity() const;
	void setQuantity(int quantity);
	int getSerialNumber() const;
	void setSerialNumber(int serialNumber);

private:
	string make;
	string model;
	int quantity;
	int serialNumber;
};

#endif /* INVENTORY_H_ */
