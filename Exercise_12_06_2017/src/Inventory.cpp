/*
 * Inventory.cpp
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */

#include "Inventory.h"

Inventory::~Inventory() {
	// TODO Auto-generated destructor stub
}

const string& Inventory::getMake() const {
	return make;
}

void Inventory::setMake(const string& make) {
	this->make = make;
}

const string& Inventory::getModel() const {
	return model;
}

void Inventory::setModel(const string& model) {
	this->model = model;
}

int Inventory::getQuantity() const {
	return quantity;
}

void Inventory::setQuantity(int quantity) {
	this->quantity = quantity;
}

int Inventory::getSerialNumber() const {
	return serialNumber;
}

void Inventory::setSerialNumber(int serialNumber) {
	this->serialNumber = serialNumber;
}

Inventory::Inventory(string make, string model, const int& quantity,
		const int& serialNumber) {
	setMake(make);
	setModel(model);
	setQuantity(quantity);
	setSerialNumber(serialNumber);
}
