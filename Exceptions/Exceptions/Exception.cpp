#include <iostream>
#include <string>
#include "Exception.h"
using namespace std;

int main()
{
	try
	{
		cout << "Please enter two numbers to divide." << endl;
		cout << "Please enter the numerator: "; cin >> numerator;
		cout << "Please enter the denomerator: "; cin >> denomerator;
		cout << "Dividing Numbers..." << endl;
		if (denomerator == 0)
		{
			throw runtime_error("Cannot divide by zero");
		}
		divResult = numerator / denomerator;
		cout << "The result of dividing your two numbers is: " << divResult << endl;
		cout << "Next, please enter your age.";
		cin >> age;
		if (age < 0)
		{
			
		}
	}
	catch (runtime_error& error)
	{
		cout << "Exception has occurred: " << error.what() << endl;
	}

	system("pause");
	return 1;
}