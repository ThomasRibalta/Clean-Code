#include <stdio.h>

// Mauvais exemple
int main() {
    int nombre = 5;
    int valeurFinal = nombre + 1;

    printf("La valeur est : %d\n", valeurFinal);

    return 0;
}

// Bon exemple
int main() {
    int nombre = 5;

    nombre++;
    printf("La valeur est : %d\n", nombre);

    return 0;
} 
