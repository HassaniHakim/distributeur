#pragma once
#include <string>

class Compte
{
	
public:
	Compte();
	Compte(int numeroCompte,int solde); //contructeur
	void crediterCompte(int argentDeposer);
	void debiterCompte(int argentRetirer);
	//methodes	
	

private :

	void consulterRIB();
	void virement();
	void commanderCheque();
	
	void crediterAutreCompte(int debiterCompte_A, int crediterCompte_B);
	
	//attributs

	int m_numerocompte;
	int m_solde;
};

