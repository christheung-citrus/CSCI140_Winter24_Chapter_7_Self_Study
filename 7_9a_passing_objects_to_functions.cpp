#include <iostream>
#include <cmath>

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

void displayRectangle(const Rectangle &);

//passing Rectangle object
//using const to ensure that this function does not change the values in the object that is passed in
void displayRectangle(const Rectangle &r) {
	std::cout << "Length = " << r.getLength() << std::endl; //using the dot operator to access its member functions
	std::cout << "Width " << r.getWidth() << std::endl;
	std::cout << "Area " << r.calcArea() << std::endl;
}

int main() {
	// define a rectangle object
	Rectangle box;

	// setting values
	box.setLength(5);
	box.setWidth(10);

	//using a function that allows us to pass in a Rectangle object
	//it passes in a copy of the object, if we needed it to change the original we would need to pass by reference
	//it will subsequently call the member functions of that object
	displayRectangle(box);

	return 0;
}