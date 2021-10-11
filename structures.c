//
// Created by theor on 06/10/2021.
//

#include "structures.h"
#include <stdio.h>


//IN void
//OUT 1 nombre rationnel q
//Cette fonction permet de creer un nombre rationnel
NombreRationnel saisie() {
    NombreRationnel q;
    printf("Entrez le numerateur\n");
    scanf("%d", &q.numerateur);
    printf("Entrez le denominateur\n");
    scanf("%d", &q.denominateur);
    return q;
}


//IN void
//OUT void
//Cette procedure affiche le nombre rationnel
void afficher( NombreRationnel q) {
    printf("%d / %d", q.numerateur, q.denominateur);
}


//IN 2 nombres rationnels q et s
//OUT 1 nombre rationnel f
//Cette fonction effectue la multiplication de deux nombres rationnels
NombreRationnel multiplication( NombreRationnel q, NombreRationnel s) {
    NombreRationnel f;
    f.numerateur = q.numerateur * s.numerateur;
    f.denominateur = q.denominateur * s.denominateur;
    return f;
}


NombreRationnel addition( NombreRationnel q, NombreRationnel s) {
    NombreRationnel f;
    f.numerateur = (q.numerateur * s.denominateur) + (s.numerateur * q.denominateur);
    f.denominateur = q.denominateur * s.denominateur;
    return f;
}


int PGCD( NombreRationnel q) {
    int a = q.numerateur;
    int b = q.denominateur;
    int d = 1;
    while ( d != 0 ) {
        d = a - b;
        if ( d < b ) {
            a = b;
            b = d;
        }
        else {
            a = d;
        }
    }
    return a;
}
