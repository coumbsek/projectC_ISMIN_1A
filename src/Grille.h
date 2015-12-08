/*
 * Grille.h
 *
 *  Created on: 2 déc. 2015
 *      Author: pdozolme
 */

#ifndef GRILLE_H_
#define GRILLE_H_

typedef struct{
	char	**map;//representation de la salle
	int 	tps;	//temps de la simulation
	int		Y;		//Dim Y
	int		X;		//Dim X
	t_Personne *people;
}t_Grille;

char	f_iniGrille(t_Grille *g,int Y, int X, int nbr);

char	f_resetGrille(t_Grille *g);


#endif /* GRILLE_H_ */
