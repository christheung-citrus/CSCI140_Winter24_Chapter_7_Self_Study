// who:  Christopher Theung (ctheung)
// what: <the function of this program>
// why:  <the name of the lab>
// when: <the due date of this lab>

#include <iostream>

//declare the enumerated data type
enum Roster {
	Tom = 1,
	Sharon,
	Bill,
	Teresa,
	John
}; //Sharon - John will be assigned default values 2-5

int main()
{
	int who;

	std::cout << "This program will give you a student's birthday.\n";
	std::cout << "Whose birthday do you want to know?\n";
	std::cout << "1 = Tom\n";
	std::cout << "2 = Sharon\n";
	std::cout << "3 = Bill\n";
	std::cout << "4 = Teresa\n";
	std::cout << "5 = John\n";
	std::cin >> who;

	switch (who)
	{
	case Tom: //self-documenting in the sense that we can use the person's name here
	//not just the number
	//in the background it will be referring to the enumerated data type's value
	//this case refers to enumerated type 1
		std::cout << "\nTom's birthday is January 3.\n";
		break;
	
	case Sharon: //this case refers to enumerated type 2
		std::cout << "nSharon's birthday is April 22.\n";
		break;
	
	case Bill: //this case refers to enumerated type 3
		std::cout << "\nBill's birthday is December 19.\n";
		break;
	
	case Teresa: //this case refers to enumerated type 4
		std::cout << "\nTeresa's birthday is February 2.\n";
		break;
	
	case John: //this case refers to enumerated type 5
		std::cout << "\nJohn's birthday is June 17.\n";
		break;
	
	default:
		std::cout << "\nInvalid selection\n";
		break;
	}
	
	return 0;
}
