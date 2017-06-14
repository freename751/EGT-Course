/*
 * Cinema.h
 *
 *  Created on: 3.06.2017 ã.
 *      Author: freen
 */

#ifndef CINEMA_H_
#define CINEMA_H_

#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include "pugiconfig.hpp"

using namespace std;

class Cinema {
public:
	Cinema();



	virtual ~Cinema();
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


};

#endif /* CINEMA_H_ */
