// gestion des paquets de cartes des joueurs
#include "joueur.h"
#include "jeu.h"
#include "partie.h"

void Joueur::ajoutCarte(Carte laCarte)
{
	paquetJoueur.ajoute(laCarte);
}

void Joueur::afficheJeu()
{
	paquetJoueur.affichePaquetJoueur();
}
