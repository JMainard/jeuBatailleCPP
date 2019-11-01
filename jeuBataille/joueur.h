#ifndef JOUEUR
	#define JOUEUR
//Class joueur gestion des paquest de cartes des joueurs
#include <iostream>
#include <vector>
#include "jeu.h"
#include "carte.h"
using namespace std;

class Joueur
{
	//Les propriétés
	private:
	string nom;
	Jeu paquetJoueur;
	//monJeu jeu; 	
	//Les méthodes
	public:
	void affiche();//Affiche le nom du joueur
	void afficheJeu();//Affiche le jeu de carte du joueur
	void ajoutCarte(Carte laCarte);

};
#endif
