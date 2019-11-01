#ifndef CARTE
#define CARTE
//class carte valeur,nom,couleur de la carte 
//On va prendre le tabCarte puis analyser avec l'indice quel carte se trouve dasn cette case 

#include <iostream>
#include <vector>
using namespace std;

class Carte
{
	//Les propriétés
	private :
		string typeCarte;
		int valeurCarte;
		string nomCarte;


	//Les méthodes
	public :
		Carte (string,int,string);
		Carte(); //Constructeur vide permettant de creer la 32 case comme tampons pour le maknge de carte
		void affiche();
};	 
#endif
