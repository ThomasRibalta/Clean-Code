int longueurDuMot(char *mot){
    int nombreDeLettre;

    nombreDeLettre = 0;
    while (mot[nombreDeLettre]){
        nombreDeLettre++;
    }
    return (nombreDeLettre);
}