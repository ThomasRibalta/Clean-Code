// Mauvais exemple
int main() {
    char listePrenoms[1000];
    int nombrePrenoms = 0;
    char prenom[10];

    printf("Entrez des prénoms (maximum %d, tapez 'fin' pour terminer):\n", 10);
    while (nombrePrenoms < 10) {
        printf("Prénom %d : ", nombrePrenoms + 1);
        scanf("%s", prenom);
        if (strcmp(prenom, "fin") == 0) {
            break;
        }
        ft_strjoin(listePrenoms, prenom);
        ft_strjoin(listePrenoms, ", ");
        nombrePrenoms++;
    }
    printf("\nListe des prénoms enregistrés : %s\n", listePrenoms);
    return 0;
}

// Bon exemple
int main() {
    char listePrenoms[5][10];
    int nombrePrenoms = 0;
    char prenom[10];

    printf("Entrez des prénoms (maximum %d, tapez 'fin' pour terminer):\n", 10);
    while (nombrePrenoms < 10) {
        printf("Prénom %d : ", nombrePrenoms + 1);
        scanf("%s", prenom);
        if (strcmp(prenom, "fin") == 0) {
            break;
        }
        strcpy(listePrenoms[nombrePrenoms], prenom);
        nombrePrenoms++;
    }
    printf("\nListe des prénoms enregistrés :\n");
    for (int i = 0; i < nombrePrenoms; i++) {
        printf("%d. %s\n", i + 1, listePrenoms[i]);
    }
    return 0;
}