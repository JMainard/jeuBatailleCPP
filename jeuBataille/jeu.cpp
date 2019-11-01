//Jeu conteant les 2 tab des jeu des 2 joeur
#include "jeu.h"

void Jeu::creationCarte()
{ 
	//Double Vecteur 1 vecteur pour le nom et un autre pour la couleur
	string tabTypeCarte[4]={"Coeur","Carreau","Pique","Trefle"};
	string tabNomCarte[8]={"Sept","Huit","Neuf","Valet","Dame","Roi","Dix","As"};

	//Double boucle imbrique pour créer les cartes 
	for (int noType=0;noType<4;noType++)
	{
		for (int noNom=0;noNom<8;noNom++)
		{
			int valeurCarte=noNom;
			//Attribution au constructeur
			Carte nouvelleCarte (tabTypeCarte[noType],valeurCarte,tabNomCarte[noNom]); 
			vectCarte.push_back(nouvelleCarte);
		}
	}

}
void Jeu::afficheVectCarte()
{

	for (int noCarte=0; noCarte<vectCarte.size();noCarte++)
	{	
		vectCarte[noCarte].affiche();

	}
}

int Jeu::melangeCarte()
{
	vectCarte.push_back(Carte());
	int nbRandom;
	srand(time(NULL));//initialisiation di timer pour le rand

	for(int nbChiffreTire=0; nbChiffreTire<32; nbChiffreTire++)
	{
		nbRandom=rand()%32;
		vectCarte[32]=vectCarte[nbChiffreTire];
		vectCarte[nbChiffreTire]=vectCarte[nbRandom];
		vectCarte[nbRandom]=vectCarte[32];
	}
}
void Jeu::afficheVectCarteMelange()
{
	for (int noCarte=0; noCarte<vectCarte.size();noCarte++)
	{	
		vectCarte[noCarte].affiche();
	}
}
void Jeu::ajoute(Carte laCarte)
{
  vectCarte.push_back(laCarte);
}
Carte Jeu::pop()
{
   Carte laCarte=vectCarte.back();
   //effacement de la dernière cellule du vecteur
   vectCarte.pop_back();
   return laCarte;
}

void Jeu::affichePaquetJoueur()
{
	for (int indice=0;indice<vectCarte.size();indice++)
		{
			vectCarte[indice].affiche();
		}
}
