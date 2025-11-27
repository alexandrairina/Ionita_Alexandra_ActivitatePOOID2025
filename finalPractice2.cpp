
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


using namespace std;

class Tema
{
private:
	const int idTema;
	char* materie;
	string tipTema; // doc, pdf etc
	float punctaj;

public:


	static int nrTemeTrimise;

	// Constructorul fara parametrii/default sau implicit:
	Tema():idTema(nrTemeTrimise++) {
		this->materie = new char[strlen("Anonim")+1]; // asa alocam memorie ptr vector
		strcpy(this->materie, "Anonim");
		this->tipTema = "Nu stiu";
		this->punctaj = 0.0;
	};

	// Constructorul cu toti parametrii
	Tema(const char* materie, string tipTema, float punctaj):idTema(nrTemeTrimise++)
	{
		this->materie = new char[strlen(materie) + 1]; // asa alocam memorie ptr vector
		strcpy(this->materie, materie);
		this->tipTema = tipTema;
		this->punctaj = punctaj;
	};



	//cand spune doua metode accesor si nu ne specifica getter si/sau setteri facem o perche de get si set


};

int Tema::nrTemeTrimise = 0;

int main() 
{
	Tema t1;
	cout << t1.nrTemeTrimise;

	return 0; 
}