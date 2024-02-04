#include <iostream>
#include <string>

struct Location {
	std::string city;
	std::string state;
};

struct Employee {
	std::string name;
	int vacationDays, daysUsed;
	Location officeLocation; //Location struct is outside of this struct, but we create an instance of it here

	//constructor that initalizes a structure
	//includes a string and the ability to leave vacationDays uninialized when an instance is made
	//bypasses the limitations of an initalization list
	Employee(std::string n = "", int d = 0) {
		name = n;
		vacationDays = 10;
		daysUsed = d;
	}
};

int main() {
	Employee bob; //given the default name and daysUsed to 0
	bob.officeLocation.city = "Anywhere"; //two dot operators, using the instance name NOT the name of the struct to which it is an object of
	bob.officeLocation.state = "NY";

	return 0;
}