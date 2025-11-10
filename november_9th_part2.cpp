// PART 2:

#include <iostream>
#include <string>
#include <cmath>
using namespace std; 

int main() {

	// cin = used to read data from the console

	/*
	cout << "Enter a value: ";
	
	int value;
	cin >> value;
	cout << value; */

	/* Homewrok 3:

	// Write a program to convert a temp. from Fahrenheit to Celsius 

	cout << "What is the current temperature in Fahrenheit? " << endl; 

	double fahrenheitTemperature; 
	cin >> fahrenheitTemperature; 

	double celsiusTemperature = (fahrenheitTemperature - 32) / 1.8;
	cout << celsiusTemperature; */



	/* -----------------------------------------------------------------

	double result = floor(1.2);
	cout << result << endl; 

	double result2 = pow(2, 3); // 2 la puterea 3
	cout << result2 << endl;
	
	
	--------------------------------------------------------------------
	
	*/


	// Homework 4 - Write a program to calculate the area of a circle: 

	cout << "Radius = ";

	double r;
	const double pi = 3.14;
	cin >> r;
	double area = pi * pow(r, 2);
	cout << "Area = " << area;

	
	
	return 0;
}; 
