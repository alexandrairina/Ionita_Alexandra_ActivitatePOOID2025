#include <iostream> 
#include <string>

class Character {
private:

	std::string name;
	int lifePoints; 
	int atackPoints; 

public:

	// constructor: 
	Character(std::string name, int lifePoints, int atackPoints) 
	{
		this->name = name;
		this->lifePoints = lifePoints;
		this->atackPoints = atackPoints;

	}

	// metoda: 
	void seeDetails()
	{
		std::cout << "Your character, " << name << " has " << lifePoints << " life points and " << atackPoints << " attack points" << std::endl;

	}

	void attack() {


	}
								
};

int main() {

	Character hero1("Arthur", 100, 25);
	Character monster1("Goblin", 80, 10);

	hero1.seeDetails();
	monster1.seeDetails();
	return 0;
	
}

