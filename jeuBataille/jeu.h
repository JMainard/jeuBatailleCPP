#ifndef JEU
  #define JEU
//
#include <iostream>
#include <vector>
#include "carte.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std; 
class Jeu
{
	//Les propriétés
	private :
	vector <Carte> vectCarte;	

	//les methodes
	public:	
	// Creation des cartes 
	void afficheVectCarte();
	void creationCarte();		
	// --- //
	//Tirage au sort des cartes //
	int melangeCarte();
	void afficheVectCarteMelange();
    void ajoute(Carte laCarte);
    //donne la carte du dessus du tas
    Carte pop();
	void affichePaquetJoueur();
	// --- //

};
#endif
