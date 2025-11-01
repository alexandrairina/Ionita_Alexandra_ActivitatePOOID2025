#include <iostream>
#include <string>
using std::string;
using namespace std;

class Employee {
public: 
	string name;
	string company;
	int age; 

	
	void introduceYourself() {

		std::cout << "My name is " << name << " and I work for " << company << " and I have " << age << " years! " << std::endl;
	}; 

	Employee(string name, string company, int age) {
		this -> name = name;
		this -> company = company;
		this -> age = age; 

	};
};






int main() {
	 
	Employee employee1 = Employee("Alleee", "Oracle", 27);
	//employee1.name = "Alle";
	//employee1.company = "Oracle";
	//employee1.age = 27;

	employee1.introduceYourself();

	//mployee employee2 

}

