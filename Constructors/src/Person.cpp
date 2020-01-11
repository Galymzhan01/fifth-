/*
 * Person.cpp
 *
 *  Created on: 24 дек. 2019 г.
 *      Author: Asus
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	name = "undefined";
	age = 0;
}
string Person::toString(){
	stringstream ss;
	ss << "Name is ";
	ss << name;
	ss << "; 	Age is ";
	ss << age;
	return ss.str();
}

