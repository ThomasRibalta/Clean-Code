// Mauvais exemple
int fonction1(char *m){
    int i;

    i = 0;
    while (m[i]){
        i++;
    }
    return (i);
}

// Bon exemple
int longueurDuMot(char *mot){
    int nombreDeLettre;

    nombreDeLettre = 0;
    while (mot[nombreDeLettre]){
        nombreDeLettre++;
    }
    return (nombreDeLettre);
}