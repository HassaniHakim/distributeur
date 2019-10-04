#pragma once
#include <string>

class Client
{

	public:
		
		
		Client(); //Constructeurs par defaut
		Client(int numeroCNI, std::string nom, std::string prenom, int numerotel); //constructeur
		//~Client();//Destructeur

		//methodes
		void afficher();

	private:

		// Attributs
		int m_numeroCNI;
		std::string m_nom;
		std::string m_prenom;
		int m_numerotel;
};



