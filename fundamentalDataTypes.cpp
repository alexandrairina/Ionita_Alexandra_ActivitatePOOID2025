#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std; 


int main() {

	/* Homework
	Write a program for rolling dice */

	const short minValue = 1;
	const short maxValue = 6;

	srand(time(0));
	short first = (rand() % (maxValue - minValue + 1)) + minValue;
	short second = (rand() % (maxValue - minValue + 1)) + minValue;


	cout << first << " , " << second << endl;
	cout << "        " << endl;


	// Formatting Output: 

	cout << left; 

	cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
	     << setw(10) << "Summer" << setw(10) << "Hot" << endl;

	// How to format floating numbers?

	cout << 12.34567 << endl;


	return 0;
};
