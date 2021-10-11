//
// Created by theor on 06/10/2021.
//

#ifndef TP5_ROBERT_STRUCTURES_H
#define TP5_ROBERT_STRUCTURES_H

struct NombreRationnel {
    int numerateur;
    int denominateur;
};

typedef struct NombreRationnel NombreRationnel;

NombreRationnel saisie();
void afficher( NombreRationnel q );
NombreRationnel multiplication( NombreRationnel q, NombreRationnel s );
NombreRationnel addition( NombreRationnel q, NombreRationnel s );
int PGCD( NombreRationnel q );


#endif //TP5_ROBERT_STRUCTURES_H


