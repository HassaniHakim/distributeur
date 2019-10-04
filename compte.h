#pragma once
#include <string>

class Compte
{
	
public:
	Compte();
	Compte(int numeroCompte,int solde); //contructeur
	
	//methodes	
	

private :

	void consulterRIB();
	void virement();
	void commanderCheque();
	void crediterCompte(int mont_Ajouter);
	void debiterCompte(int soustraireCompte);
	void crediterAutreCompte(int debiterCompte_A, int crediterCompte_B);
	
	//attributs

	int m_numerocompte;
	int m_solde;
};

