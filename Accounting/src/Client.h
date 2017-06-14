/*
 * Client.h
 *
 *  Created on: 12.06.2017 ã.
 *      Author: freen
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include <iostream>
#include <iomanip>


using std::setw;
using std::string;
using std::ostream;
using std::endl;
using std::cout;
using std::cin;
using std::cerr;


class Client {

public:
	Client(string fName = "", string lName = "", string pNumber = "", string description = "");
	virtual ~Client();
	const string& getDescription() const;
	void setDescription(const string& description);
	const string& getFName() const;
	void setFName(const string& name);
	const string& getLName() const;
	void setLName(const string& name);
	const string& getPNumber() const;
	void setPNumber(const string& number);

	friend ostream& operator << (ostream& os ,const Client& obj);


private:
	string fName;
	string lName;
	string pNumber;
	string description;
};

#endif /* CLIENT_H_ */
