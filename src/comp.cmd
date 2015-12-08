gcc -std=c99 -c -Wall Grille.c
gcc -std=c99 -c -Wall Project.c
gcc -std=c99 Project.o Grille.o -o Project  