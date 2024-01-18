#include <stdio.h>

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
        printf("Vous vous appelez %s(%d) %s(%d). Comme vous avez %dans vous etes majeur en France.");
    else
        printf("Vous vous appelez %s(%d) %s(%d). Comme vous avez %dans vous etes mineur en France.");
        
    return (0);
}