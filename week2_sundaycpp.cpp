#include <iostream>

int main() {

	// Lesson 2 - Variables

	int file_size = 100;
	double sales = 9.99;

	std::cout << " Hello C++ ! My name is Alle and I'm a beginner " << std::endl;
	std::cout << "The size of the file I'm working with is " << file_size << std::endl;
	std::cout << "The total sale price for this item is " << sales << " GBP " << std::endl;

	/*Tema:
	
	Swap the value of the variables (for b, instead of 2 it should display 1 and the other way around)
	
	*/ 
	
	int a = 1;
	int b = 2;

	int c = a; 
	a = b;
	b = c;

	std::cout << b << std::endl;
	std::cout << a << std::endl;



	return 0;

}