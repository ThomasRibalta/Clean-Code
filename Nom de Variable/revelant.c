#include <stdio.h>
#include <string.h>

#define MAX_FRUITS 5
#define MAX_FRUIT_NAME 10

void insert(char array[MAX_FRUITS][MAX_FRUIT_NAME], int *size, const char *fruit) {
    if (*size >= MAX_FRUITS) {
        printf("Le tableau est plein. Impossible d'ajouter un nouvel élément.\n");
        return;
    }
    int i = *size;
    while (i > 0) {
        strcpy(array[i], array[i - 1]);
        i--;
    }
    strcpy(array[0], fruit);
    (*size)++;
}

void append(char array[MAX_FRUITS][MAX_FRUIT_NAME], int *size, const char *fruit) {
    if (*size >= MAX_FRUITS) {
        printf("Le tableau est plein. Impossible d'ajouter un nouvel élément.\n");
        return;
    }
    strcpy(array[*size], fruit);
    (*size)++;
}

int main() {
    char ArrayFruits[MAX_FRUITS][MAX_FRUIT_NAME];
    int size = 0;

    appendAtEnd(ArrayFruits, &size, "Pomme");
    append(ArrayFruits, &size, "Banane");
    append(ArrayFruits, &size, "Orange");
    printf("Tableau actuel : ");
    displayArray(ArrayFruits, size);
    insert(ArrayFruits, &size, "Fraise");
    printf("Tableau après insertion au début : ");
    displayArray(ArrayFruits, size);

    return 0;
}
