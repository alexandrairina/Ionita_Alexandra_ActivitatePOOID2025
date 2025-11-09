
// The Basics (Constants) 

#include <iostream>
#include <string>

using namespace std; // so we can get rid of std::cout; std::string; std::endl etc. 

int main() {

	const double pi = 3.14;
	std::cout << "The number for PI is: "<< pi << std::endl;

	// Naming conventions: 

	int file_size; // Snake case
	int FileSize; // Pascal case
	int fileSize; // Camel case 
	int iFileSize; // Hungarian notation (pretty old! - not relevant anymore - i comes from the data type) 


	/* Mathematical Expressions :

	int x = 10;
	int y = 3;
	int z = x + y;

	std::cout << "SUM: " << z << std::endl; */

	/* Increment Operator :

	int example = 10;
	example++; // equivalent with example = example +1 (example = 10 + 1 -> example = 11)
	std::cout << example; */


	// Homework:

	/*
	double x = 10;
	int y = 5;
	double z = (x + 10) / (3 * y);

	std::cout << z; */


	// Homework 2: 

	double sales = 95000; // double is best for monetary values 
	const double stateTax = 4;
	const double countyTax = 2; 

	// totalSales = ? ; totalTax = ? ; stateTaxValue = ? ; countyTaxValue = ? 

	cout << "Total Sales = $" << sales << endl;
	
	int stateTaxValue = (stateTax / 100) * sales;
	cout << "State Tax = $" << stateTaxValue << endl;

	int countyTaxValue = (countyTax / 100) * sales;
	cout << "County Tax Value = $" << countyTaxValue << endl;

	int totalTax = stateTaxValue + countyTaxValue;
	cout << "Total Tax Value = $" << totalTax << endl;

	
	



	

	return 0;
}; 