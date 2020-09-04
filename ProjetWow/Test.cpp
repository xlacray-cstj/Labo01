// But : Créer un programme qui affiche un message à l'écran en sauvegardant plusieurs versions de
//		 ce programme avec git et de l'héberger sur la plateforme GitHub
//
// Auteur :  Xavier Lacroix-Raymond
// Date : 4-09-2020

#include <iostream>		// Intègre le coffre à outils pour afficher à l'écran (o out output) (i in input)



int main(/* liste des paramètres séparés par une virgule le cas échéant */)
{

	//Pour corriger les caractères accentués
	setlocale(LC_ALL,"");
	
	// Affichage du message à l'écran
	std::cout << "Steak Blé d'Inde Patates";


	return 0;
}
