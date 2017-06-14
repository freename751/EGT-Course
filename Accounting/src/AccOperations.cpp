/*
 * AccOperations.cpp
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */

#include "AccOperations.h"

AccOperations::AccOperations() {
	// TODO Auto-generated constructor stub

}

AccOperations::~AccOperations() {
	// TODO Auto-generated destructor stub
}

void AccOperations::clientAdd() {

	string fName, lName, pNumber;
	char description[500];
	cout << "Input client data (first name, last name, phone number): ";
	cin >> fName >> lName >> pNumber;
	//cout << "Input client description: " << endl;
	//cin.getline(description, 500);

	//Client client(fName, lName, pNumber, description);

	if(clientList.find(fName) != clientList.end()){
		cerr << "Existing Name !!" << endl;
		return;
	} else {
		clientList[fName] = Client(fName, lName, pNumber, description);
	}
}

void AccOperations::print() {

	cout << setw(10) << "First Name" << setw(10) << "Last Name" << setw(15)
				<< "Phone Number" << setw(500) << "Description" << endl;


	for(cList::const_iterator i = clientList.begin(); i!=clientList.end(); ++i)
	{
		cout << (i->second);
	}
}

void AccOperations::writeToFile() {
		ofstream file("clients.bin", ios::binary|ios::ate);

		for(cList::const_iterator i = clientList.begin(); i!=clientList.end(); ++i)
		{
			file.write(reinterpret_cast<const char*>(&i->second), sizeof(Client));
		}
		file.close();
}

void AccOperations::readFromFile() {
		ifstream file("clients.bin", ios::binary);
		if(!file){
			cerr << "File doesn't exist. Creating..." << endl;
			ofstream open("clients.bin", ios::binary);
			open.close();
		}

		for(cList::const_iterator i = clientList.begin(); i!=clientList.end(); ++i)
		{
			Client tmp;
			file.read(reinterpret_cast<char*>(&tmp), sizeof(Client));
			cout << tmp;
			clientList[tmp.getFName()] = tmp;
		}
		file.close();
}
