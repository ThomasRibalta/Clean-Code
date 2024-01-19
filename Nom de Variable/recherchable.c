#include <stdio.h>

// Mauvais Exemple
int main(){
    char    a[7] = "Ribalta";
    char    b[5] = "Thomas";
    int c = 18;
    int d = 0;
    int e = 0;

    while (a[d])
        d++;

    while (b[e])
        e++;

    if (c > 17)
        printf("Vous vous appelez %s(%d) %s(%d). Comme vous avez %dans vous etes majeur en France.", a, d, b, e, c);
    else
        printf("Vous vous appelez %s(%d) %s(%d). Comme vous avez %dans vous etes mineur en France.", a, d, b, e, c);
        
    return (0);
}

// Bon exemple
int main(){
    char    nomFamille[7] = "Ribalta";
    char    prenom[5] = "Thomas";
    int age = 18;
    int longueurDuNom = 0;
    int longueurDuPrenom = 0;

    while (nomFamille[longueurDuNom])
        longueurDuNom++;

    while (prenom[longueurDuPrenom])
        longueurDuPrenom++;

    if (age > 17)
        printf("Vous vous appelez %s(%d) %s(%d). Comme vous avez %dans vous etes majeur en France.", nomFamille, longueurDuNom, prenom, longueurDuPrenom, age);
    else
        printf("Vous vous appelez %s(%d) %s(%d). Comme vous avez %dans vous etes mineur en France.", nomFamille, longueurDuNom, prenom, longueurDuPrenom, age);
        
    return (0);
}