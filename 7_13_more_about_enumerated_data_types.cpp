// who:  Christopher Theung (ctheung)
// what: <the function of this program>
// why:  <the name of the lab>
// when: <the due date of this lab>

#include <iostream>

int main()
{
	//DECLARING AN ENUM DATA TYPE AND DEFINING VARIABLES IN ONE STATEMENT
	enum Car { PORSCHE, FERRARI, JAGUAR };
	Car sportsCar;

	//shorter version of the above
	enum Car { PORSCHE, FERRARI, JAGUAR } sportsCar;

	//********************************************************
	//ASSIGNING AN INTEGER TO AN ENUM VARIABLE
	enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
	Day today;
	today = THURSDAY;
	//today = 3; // Error! Only valid enumerators accepted
	today = static_cast<Day>(3); //force a static cast to store an integer value in an enum variable
	//produces same result as today = THURSDAY;
	
	//********************************************************
	//ASSIGNING AN INTEGER TO AN INT VARIABLE
	enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
	Day today;

	int today = THURSDAY; //declaring an int and then assigning it a valid enumerator (3)
	Day workday = FRIDAY; //declaring an enumerated type variable and assigning it a valid enumerator
	int tomorrow = workday; //declaring an int and then assigning it to an enumerated type variable

	//********************************************************
	//USING MATH OPERATORS TO CHANGE THE VALUE OF AN ENUM VARIABLE
	Day day1, day2; // Define two Day variables
	day1 = TUESDAY; // Assign TUESDAY to day1
	//day2 = day1 + 1; // ERROR! This will not work
	//the expression day1 + 1 results in the integer value 2
	//an attempt to assign integer value 2 to the enum variable day2
	//c++ cannot implicity convert int to Day, so an error occurs

	//correct way would be to explicitly cast integer value 2 to the enumerated data type
	day2 = static_cast<Day>(day1 + 1);

	//********************************************************
	//USING ENUMERATORS TO OUTPUT VALUES
	std::cout << MONDAY << std::endl; //this would only print out the integer value of the enumerated data type
	
	Day workday = FRIDAY;
	switch(workday)
	{
		case MONDAY : std::cout << "Monday";
		break;
		case TUESDAY : std::cout << "Tuesday";
		break;
		case WEDNESDAY: std::cout << "Wednesday";
		break;
		case THURSDAY: std::cout << "Thursday";
		break;
		case FRIDAY: std::cout << "Friday";
		break;
	}

	//********************************************************
	//USING ENUMERATORS TO CONTROL A LOOP
	//loops are normally controlled with increment or decrement operators
	//but they are not allowed on enumerated data types
	//(math cannot be peformed on them unless we explicitly cast)

	double sales, total = 0.0;

	//loop needs to be written like this
	//a valid enumerated data type is assigned to the counter control variable
	//its condition is tested against another enumerated data type
	//the increment operator is used on the counter control variable (declared int), not the enumerated data type directly
	for (int workday = MONDAY; workday <= FRIDAY; workday++)
	{
		std::cout << "Enter the sales for day " << (workday + 1) << ": "; //math operation performed on the integer we declare
		std::cin >> sales;
		total += sales;
	}

	return 0;
}
