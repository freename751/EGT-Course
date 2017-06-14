/*
 * Client.cpp
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */

#include "Client.h"

Client::Client(string fName, string lName, string pNumber, string description) {
	setFName(fName);
	setLName(lName);
	setPNumber(pNumber);
	setDescription(description);
}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

const string& Client::getDescription() const {
	return description;
}

void Client::setDescription(const string& description) {
	this->description = description;
}

const string& Client::getFName() const {
	return fName;
}

void Client::setFName(const string& name) {
	fName = name;
}

const string& Client::getLName() const {
	return lName;
}

void Client::setLName(const string& name) {
	lName = name;
}

const string& Client::getPNumber() const {
	return pNumber;
}

void Client::setPNumber(const string& number) {
	pNumber = number;
}

ostream& operator <<(ostream& os, const Client& obj) {
	os <<std::left<< setw(10) << obj.getFName() << setw(10) << obj.getLName() << setw(15)
			<< obj.getPNumber() << setw(500) << obj.getDescription() << endl;

	return os;
}

