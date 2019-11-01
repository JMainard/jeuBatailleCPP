//class carte valeur,nom,couleur de la carte 
//On va prendre le tabCarte puis analyser avec l'indice quel carte se trouve dedans  
#include "carte.h"


//Instance du constructeur carte pour pouvoir remplir le tableau
Carte::Carte(string leType,int laValeur,string leNom)
{

	typeCarte=leType;
	valeurCarte=laValeur;
	nomCarte=leNom;
}
// Creation du constructeur vide pour le tampons du melange de carte 
Carte::Carte()
{
}

void Carte::affiche()
{
  cout<<nomCarte<<" de "<<typeCarte<<" "<<valeurCarte<<endl;
}

