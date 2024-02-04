#include <iostream>
#include <cmath>


class Sale // Illegal declaration!
{ 	private:
		double taxRate;

	public:
		Sale() // Default constructor with no arguments
		{ taxRate = 0.05; }
		
		Sale(double r = 0.05) // Default constructor with a default argument
		{ taxRate = r; }

		double calcSaleTotal(double cost) {
			double total = cost + cost * taxRate;
			return total;
		}
};

class Rectangle {
	private:
		double width = 0.0;
		double length = 0.0;
	
	public:
		//Public member functions go here. . .
};

class Rectangle {
	private:
		double length;
		double width;

	public:
		//mutator functions
		void setLength(double);
		void setWidth(double);
		
		//accessor functions
		//inline to prevent overhead in the call stack
		double getLength() {return length; }
		double getWidth() {return width; }

		//an acessor function that does not return the value stored in the variable
		//hence, it does not have "get" at the beginning of the name
		double calcArea();

};

//this function is defined OUTSIDE of its class
//the :: is the scope resolution operator
//the parameter name len is used so as to not conflict with the member variable length inside the Rectangle class
void Rectangle::setLength(double len) {
	if (len >= 0.0) { length = len; }
	else {
		//default value is set to safeguard data and filter out bad data
		length = 1.0;
		std::cout << "Invalid length. Using a default value of 1.0\n";
	}
}

void Rectangle::setWidth(double wid) {
	if (wid >= 0.0) { width = wid; }
	else {
		width = 1.0;
		std::cout << "Invalid width. Using a default value of 1.0\n";
	}
}

double Rectangle::calcArea() {
	return length * width;
}

int main() {
	// define a rectangle object
	Rectangle box;

	// setting values
	box.setLength(5);
	box.setWidth(10);

	// calling the member functions of Rectangle
	std::cout << "Box details: " << std::endl;
	std::cout << "Length: " << box.getLength() << std::endl;
	std::cout << "Width : " << box.getWidth() << std::endl;
	std::cout << "Area : " << box.calcArea() << std::endl;

	return 0;
}