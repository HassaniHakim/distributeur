#include "client.h"
#include <iostream>

using namespace std;





Client::Client() 
{}

Client::Client(int numeroCNI, std::string nom, std::string prenom, int numerotel) 
{
		m_numeroCNI = numeroCNI;
		m_nom = nom;
		m_prenom = prenom;
		m_numerotel = numerotel;
		
}




void Client::afficher()
{
	int pass = 75017;
	int input = 0;
	int nb_essai = 0;
	
	do {

			cout << "Quel est votre code\n"; //afficher quel est votre code
			cin >> input;
			nb_essai++; // décrementer le nbre d'essai
	}while (input != pass); // Tant que le code n'est pas le mdp
		
		
	 if (input != pass && nb_essai>3) //si le nbre d'essai est à 0
		{
			cout << "mdp erronee\n"; //afficher ce msg
		}
	

		else if (input = pass) //sinon si le code est le mdp 
		{

			cout << "voici les coordonnes de votre compte\n Votre numero CNI :\t" << m_numeroCNI << endl;
			cout << " Nom : \t" << m_nom << endl;
			cout << " Prenom :\t" << m_prenom << endl;
			cout << " Numero de telephone :\t" << m_numerotel << endl;

		}
}