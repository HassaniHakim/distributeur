// distributeur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;


#include "client.h"
#include "compte.h"
int pass=75017;
int input;
int nb_essai= 3;
int choix;
int somme;
int argentDeposer = 0 ;
int argentRetirer = 0 ;


int main()
{
	/* Affichage des informations du client*/

	Client A{ 100,"hassani","hakim", 062 }; //Création d'objet de type client 

		A.afficher(); //on affiche le client A
		
	
	/* Affichage du menu */

	Compte Epargne{100,0 };

	

	cout << "\t\t===========================<<<<<<<<<<< BANQUE SN2 >>>>>>>>>>>==========================\n\n"<<endl;
 	cout << "\t\t                                                                                \n"<<endl;
 	cout << "\t\t  [1] : ==========<<<<<<<  Déposer de l'argent             >>>>>>========       \n"<<endl;
 	cout << "\t\t  [2] : ==========<<<<<<<  Retirer de l'argent             >>>>>>========       \n"<<endl;
	cout << "\t\t                                                                                \n"<<endl;
	cout << "\t\t===========================<<<<<<<<<<< BANQUE SN2 >>>>>>>>>>>==========================\n\n"<<endl;
	
	cout << " Quelle transaction désiez-vous effectuer ?"<< endl;
	cin >> choix;

	switch(choix)
	{
		case 1: 
			cout << "combien voulez-vous deposer ?"<< endl;
			cin >> argentDeposer;
			Epargne.crediterCompte(argentDeposer);
			break;

		case 2:
			cout << "Combien voulez-vous retirez ?" << endl;
			cin >> argentRetirer;
			Epargne.debiterCompte(argentRetirer);


	
	}
	

	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
