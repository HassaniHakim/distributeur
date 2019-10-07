#include "compte.h"
#include <iostream>

using namespace std;

Compte::Compte(int numeroCompte, int solde)
{
	m_numerocompte = numeroCompte;
	m_solde = 500;

}

void Compte::consulterRIB()
{


}

void Compte::virement()
{


}

void Compte::commanderCheque()
{


}

void Compte::crediterCompte(int argentDeposer)
{
	m_solde = m_solde + argentDeposer;
	cout << "Vous avez depose"<< argentDeposer << "euros sur votre compte bancaire. Vous avez maintenant " << m_solde << " euros sur votre compte." << endl;

}

void Compte::crediterAutreCompte(int debiterCompte_A,int crediterCompte_B)
{


}

void Compte::debiterCompte(int argentRetirer)
{

	if (argentRetirer > m_solde)
		cout << "Votre compte ne contient pas assez d'argent pour retirer cette somme" << endl;

	else 
	{
		m_solde = m_solde - argentRetirer;
		cout << "Vous avez retirer" << argentRetirer << "Votre solde est maintenant de" << m_solde << "euros." << endl;  
	}
}