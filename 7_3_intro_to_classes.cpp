// who:  Christopher Theung (ctheung)
// what: <the function of this program>
// why:  <the name of the lab>
// when: <the due date of this lab>

#include <iostream>

class ClassName // Class declaration begins with the key word class and a name
{
	//Declarations for class member variables
	//and member functions go here.
}; // Notice the required semicolon.

//step 1: determine member variables and member functions
	//member variables: 
		// radius (double data type)
	//member functions: 
		// setRadius (sets the radius variable)
		// calcArea (calculates the area of the circle with the radius variable)
// step 2: declare class (below)
class Circle {
	private: // access specifier
		double radius; // member data is usually private to safeguard it

	// if a program statement outside a class attempts to access private members, a compile error will result
	// there is a way to give special permission to access private class members
	public: //access specifier
		void setRadius(double r) {
			radius = r;
		}

		double calcArea() {
			return 3.14 * pow(radius, 2);
		}
}; // required semicolon


int main()
{
	// your code goes here
	
	return 0;
}
