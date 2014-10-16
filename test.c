#include <stdlib.h>
#include <stdio.h>
#include "matrice.h"

int main(){
	
	matrice *mat = creer_matrice(10, 10);
	//afficher_matrice(mat);
	randomiser_matrice(mat, 5, 10);
	afficher_matrice(mat);
	afficher_ligne_matrice(mat, 3);
	afficher_colonne_matrice(mat, 3);
	nettoyer_matrice(mat);
	return EXIT_SUCCESS;
}
