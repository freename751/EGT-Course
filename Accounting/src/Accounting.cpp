//============================================================================
// Name        : Accounting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Client.h"
#include "AccOperations.h"

using namespace std;

int main() {

	AccOperations test;
	test.readFromFile();
	test.clientAdd();
	test.print();
	test.writeToFile();

	return 0;
}
