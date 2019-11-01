#ifndef PARTIE
#define PARTIE
// class partie gestions des condition de jeu et de victoire
#include <iostream>
#include <vector>
#include "carte.h"
#include "joueur.h"
using namespace std; 
class Partie
{
	//Les propriétés
	private:	 
		//Les méthodes
		//les deux joueurs
		Joueur jeanne;
		Joueur michel;
		//le jeu de 32
		Jeu jeuComplet;

	public:
		int distribuer();
		Partie();
		void afficheJeuJoueur();
		int tour();

};
#endif
