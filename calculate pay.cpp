// This program calculates the user's pay.
#include <iostream>
using namespace std;

int main()
{
	double hours, rate, pay;
	
	// Get the number of hours worked.
	cout << "How many hours did you work? "; //puts out the question
	cin >> hours; //put in variable
	
	//Get the hourly pay rate
	cout << "How much do you get paid per hour? "; //puts out the question
	cin >> rate; //put in variable
	
	//calculate the pay.
	pay = hours * rate; 
	
	//Display the pay.
	cout << "You have earned $" << pay << endl;
	return 0;
}
