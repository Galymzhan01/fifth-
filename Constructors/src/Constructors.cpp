//============================================================================
// Name        : Constructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person person1;
	Person person2("Galymzhan", 17);
	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	return 0;
}
