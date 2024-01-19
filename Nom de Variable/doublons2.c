#include <stdio.h>

// Mauvais exemple
int chercherMotDansPhrase(const char* phrase, const char* mot) {
    int indicePhrase;
    int indiceMot;
    char *motFinal = mot;

    indicePhrase = 0;
    while (phrase[indicePhrase] != '\0') {
        indiceMot = 0;
        while (mot[indiceMot] != '\0' && phrase[indicePhrase + indiceMot] == mot[indiceMot]) {
            ++indiceMot;
        }
        if (mot[indiceMot] == '\0') {
            printf("Le mot [%s] est dans la phrase : %s", motFinal, phrase);
            return 1;
        }
        ++indicePhrase;
    }
    return 0;
}

// Bon exemple
int chercherMotDansPhrase(const char* phrase, const char* mot) {
    int indicePhrase;
    int indiceMot;

    indicePhrase = 0;
    while (phrase[indicePhrase] != '\0') {
        indiceMot = 0;
        while (mot[indiceMot] != '\0' && phrase[indicePhrase + indiceMot] == mot[indiceMot]) {
            ++indiceMot;
        }
        if (mot[indiceMot] == '\0') {
            printf("Le mot [%s] est dans la phrase : %s", mot, phrase);
            return 1;
        }
        ++indicePhrase;
    }
    return 0;
}