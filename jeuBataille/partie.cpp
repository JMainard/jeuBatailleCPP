// partie gestion des condidtions de jeu et de victoires
#include "partie.h"


//Distribution des cartes 
//quand indice paire =Joeur1 sinno les cartes vont au joueur 2 
int Partie::distribuer()
{
	for (int indiceDis=0;indiceDis<32;indiceDis++)
		{
			if (indiceDis%2==0)
				{
					//la carte a cette indice vas pour le joueur1
					jeanne.ajoutCarte(jeuComplet.pop());
				}
				else
				{
					// La carte vas pour le joueur2
					michel.ajoutCarte(jeuComplet.pop());
				}
		}
}


int Partie::tour()
{
	//Pendant un tour Chaque joueur tire une carte , puis on montre la carte tiré, puis on analyse si il  ya bataille ou non , puis si oui on fait bataille sinon fi ndu tour 
}



Partie::Partie()
{
    //on rempli le jeu complet
    jeuComplet.creationCarte();
    //mélanger
    jeuComplet.melangeCarte();
    //distribution
    distribuer();
    //affichage du jeu de jeanne
cout<<"Jeanne"<<endl;
    jeanne.afficheJeu();
cout<<"Michel"<<endl;
	//affichage du jeu de Michel
	michel.afficheJeu();
}

void Partie::afficheJeuJoueur()
{
	jeanne.afficheJeu();
	michel.afficheJeu();
}




