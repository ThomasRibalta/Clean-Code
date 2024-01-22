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
    t_list *listePrenoms = NULL;
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
        nouveau->next = listePrenoms;
        listePrenoms = nouveau;
        nombrePrenoms++;
    }
    printf("\nListe des prénoms enregistrés : ");
    t_list *current = listePrenoms;  
    while (current != NULL) {
        printf("%s", current->prenom);
        
        if (current->next != NULL) {
            printf(", ");
        }  
        current = current->next;
    }
    while (listePrenoms != NULL) {
        t_list *temp = listePrenoms;
        listePrenoms = listePrenoms->next;
        free(temp);
    }
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