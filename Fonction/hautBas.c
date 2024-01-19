#include <stdio.h>

float addition(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
float soustraction(float a, float b);


// Mauvais Exemple
float addition(float a, float b) {
    return a + b;
}

float multiplication(float a, float b) {
    return a * b;
}

float calculatrice(float nombre1, float nombre2, char signe) {
    float resultat;

    if (signe == '+') {
        resultat = addition(nombre1, nombre2);
    } else if (signe == '-') {
        resultat = soustraction(nombre1, nombre2);
    } else if (signe == '*') {
        resultat = multiplication(nombre1, nombre2);
    } else if (signe == '/') {
        resultat = division(nombre1, nombre2);
    } else {
        printf("Erreur : Operation non prise en charge\n");
        return 0;
    }

    return resultat;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erreur : Division par zero\n");
        return 0;
    }
}

float soustraction(float a, float b) {
    return a - b;
}


// Bon Exemple
float calculatrice(float nombre1, float nombre2, char signe) {
    float resultat;

    if (signe == '+') {
        resultat = addition(nombre1, nombre2);
    } else if (signe == '-') {
        resultat = soustraction(nombre1, nombre2);
    } else if (signe == '*') {
        resultat = multiplication(nombre1, nombre2);
    } else if (signe == '/') {
        resultat = division(nombre1, nombre2);
    } else {
        printf("Erreur : Operation non prise en charge\n");
        return 0;
    }

    return resultat;
}

float addition(float a, float b) {
    return a + b;
}

float soustraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erreur : Division par zero\n");
        return 0;
    }
}