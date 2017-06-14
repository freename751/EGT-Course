/*
 * AccOperations.h
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */
#include "Client.h"
#include <fstream>
#include <map>

using std::map;
using std::ofstream;
using std::ifstream;
using std::ios;

typedef map<string, Client> cList;

#ifndef ACCOPERATIONS_H_
#define ACCOPERATIONS_H_

class AccOperations {
public:
	AccOperations();
	virtual ~AccOperations();

	//method

	void clientAdd();
	void print();
	void writeToFile();
	void readFromFile();

private:
	cList clientList;

};

#endif /* ACCOPERATIONS_H_ */
