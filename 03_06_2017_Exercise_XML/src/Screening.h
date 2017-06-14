/*
 * Screening.h
 *
 *  Created on: 3.06.2017 ã.
 *      Author: freen
 */

#ifndef SCREENING_H_
#define SCREENING_H_

#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include "pugiconfig.hpp"

using namespace std;

class Screening {
public:
	Screening(string name = "", string hall = "", const int& capacity = 0,
			const int& soldTickets = 0, const int& pricePerTickets = 0);
	virtual ~Screening();
	int getCapacity() const;
	void setCapacity(int capacity);
	const string& getHall() const;
	void setHall(const string& hall);
	const string& getName() const;
	void setName(const string& name);
	int getPricePerTicket() const;
	void setPricePerTicket(int pricePerTicket);
	int getSoldTickets() const;
	void setSoldTickets(int soldTickets);

private:
	string name;
	string hall;
	int capacity;
	int soldTickets;
	int pricePerTicket;
};

#endif /* SCREENING_H_ */
