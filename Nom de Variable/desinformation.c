// Mauvais exemple
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
    char prenom[10];
    struct s_list *next;
} t_list;

int main() {
    t_list *arrayPrenoms = NULL;
    int nombrePrenoms = 0;
    char prenom[10];

    printf("Entrez des prénoms (maximum %d, tapez 'fin' pour terminer):\n", 10);
    while (nombrePrenoms < 10) {
        printf("Prénom %d : ", nombrePrenoms + 1);
        scanf("%s", prenom);
        if (strcmp(prenom, "fin") == 0)
            break;
        t_list *nouveau = (t_list *)malloc(sizeof(t_list));
        strncpy(nouveau->prenom, prenom, sizeof(nouveau->prenom) - 1);
        nouveau->prenom[sizeof(nouveau->prenom) - 1] = '\0';
        nouveau->next = arrayPrenoms;
        arrayPrenoms = nouveau;
        nombrePrenoms++;
    }
    printf("\nListe des prénoms enregistrés : ");
    t_list *current = arrayPrenoms;  
    while (current != NULL) {
        printf("%s", current->prenom);
        
        if (current->next != NULL) {
            printf(", ");
        }  
        current = current->next;
    }
    while (arrayPrenoms != NULL) {
        t_list *temp = arrayPrenoms;
        arrayPrenoms = arrayPrenoms->next;
        free(temp);
    }
    return 0;
}


// Bon exemple
int main() {
    char arrayPrenoms[5][10];
    int nombrePrenoms = 0;
    char prenom[10];

    printf("Entrez des prénoms (maximum %d, tapez 'fin' pour terminer):\n", 10);
    while (nombrePrenoms < 10) {
        printf("Prénom %d : ", nombrePrenoms + 1);
        scanf("%s", prenom);
        if (strcmp(prenom, "fin") == 0) {
            break;
        }
        strcpy(arrayPrenoms[nombrePrenoms], prenom);
        nombrePrenoms++;
    }
    printf("\nListe des prénoms enregistrés :\n");
    for (int i = 0; i < nombrePrenoms; i++) {
        printf("%d. %s\n", i + 1, arrayPrenoms[i]);
    }
    return 0;
}