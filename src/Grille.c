/*
 * Grille.c
 *
 *  Created on: 2 déc. 2015
 *      Author: pdozolme
 */
#include	<stdlib.h>
#include	<stdio.h>
#include	"Personne.h"
#include	"Grille.h"

char	f_iniGrille(t_Grille *g,int Y, int X, int nbr){
	g->tps=0;
	g->map=malloc(Y*X);
	g->X = X;
	g->Y = Y;
	g->people = malloc(sizeof(t_Personne)*nbr);
	return 0;
}

char	f_resetGrille(t_Grille *g){
	int X;
	int Y;

	X = g->X;
	Y = g->Y;
	for (int x = 0; x < X; x++){
		for (int y = 0; y < Y; y++){
			g->map[y][x] = 0;
		}
	}
	return 0;
}

char	f_dispGrille(t_Grille *g){
	int	X;
	int	Y;

	X = g->X;
	Y = g->Y;
	for (int x = 0; x < X; x++){
		for (int y = 0; y < Y; y++){
			printf("\t%d", g->map[y][x]);
		}
	}
	return 0;
}
