/*
 * Screening.cpp
 *
 *  Created on: 3.06.2017 ã.
 *      Author: freen
 */

#include "Screening.h"



Screening::Screening(string name, string hall, const int& capacity,
		const int& soldTickets, const int& pricePerTickets) {
	setName(name);
	setHall(hall);
	setCapacity(capacity);
	setSoldTickets(soldTickets);
	setPricePerTicket(pricePerTickets);
}

Screening::~Screening() {
	// TODO Auto-generated destructor stub
}

int Screening::getCapacity() const {
	return capacity;
}

void Screening::setCapacity(int capacity) {
	this->capacity = capacity;
}

const string& Screening::getHall() const {
	return hall;
}

void Screening::setHall(const string& hall) {
	this->hall = hall;
}

const string& Screening::getName() const {
	return name;
}

void Screening::setName(const string& name) {
	this->name = name;
}

int Screening::getPricePerTicket() const {
	return pricePerTicket;
}

void Screening::setPricePerTicket(int pricePerTicket) {
	this->pricePerTicket = pricePerTicket;
}

int Screening::getSoldTickets() const {
	return soldTickets;
}

void Screening::setSoldTickets(int soldTickets) {
	this->soldTickets = soldTickets;
}
