//
// Created by theor on 06/10/2021.
//

#include <stdio.h>
#include "exercices.h"
#include "structures.h"


void exercice1() {
    int a = 0;
    printf("Entrez un premier nombre rationnel\n");
    NombreRationnel q = saisie();
    printf("Entrez un deuxieme nombre rationnel\n");
    NombreRationnel s = saisie();
    printf("Tapez 0 pour multiplier ces deux nombres, tapez 1 pour les additionner\n");
    scanf("%d", &a);
    if ( a == 0 ) {
        NombreRationnel f = multiplication(q, s);
        int pgcd = PGCD(f);
        f.numerateur = f.numerateur / pgcd;
        f.denominateur = f.denominateur / pgcd;
        printf("Le produit de ces deux nombres rationnels vaut :\t");
        afficher(f);
    }
    else {
        NombreRationnel f = addition(q, s);
        int pgcd = PGCD(f);
        f.numerateur = f.numerateur / pgcd;
        f.denominateur = f.denominateur / pgcd;
        printf("L'addition de ces deux nombres rationnels vaut :\t");
        afficher(f);
    }
}


void exercice2() {
    int a = 0;
    int i = 0;
    int m = 0;
    int tableau[100];
    do {
        printf("Combien d'entiers voulez-vous inserer dans le tabeau ? ( entre 0 et 100 entiers )\n");
        scanf("%d", &a);
    }
    while ( !(a >= 0 && a<= 100 ) );
    for ( i = 0; i < a; i++ ) {
        printf("Quel entier voulez-vous inserer a la %deme case du tableau ?\n", i+1);
        scanf("%d", &tableau[i]);
    }
    for ( i = 0; i < a; i++ ) {
        if ( tableau[i] >= m ) {
            m = tableau[i];
        }
    }
    printf("Le plus grand entier de ce tableau est %d", m);

}


void exercice3() {
    int i = 0;
    int j = 0;
    int s = -1;
    int tableau[3][4];
    for ( i = 0; i < 3; i++ ) {
        for ( j = 0; j < 4; j++ ) {
            printf("Inserez l'entier de la %deme ligne, %deme colonne\n", i+1, j+1);
            scanf("%d", &tableau[i][j]);
        }
    }
    int tableau2[12];
    for ( i = 0; i < 3; i ++ ) {
        for ( j = 0; j < 4; j++ ) {
            s = s + 1;
            tableau2[s] = tableau[i][j];
        }
    }
    for ( i = 0; i < 12; i++ ) {
        printf("%d\t", tableau2[i]);
    }
}