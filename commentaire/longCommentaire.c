// Mauvais exemple
/*
** ft_bzero - Remplit une zone de mémoire avec des zéros.
**
** DESCRIPTION :
** La fonction ft_bzero remplit les n premiers octets de la zone mémoire pointée
** par s avec des zéros. Cette fonction est souvent utilisée pour initialiser
** une zone mémoire avant de stocker des données.
**
** PARAMÈTRES :
** s - Pointeur vers la zone mémoire à remplir avec des zéros.
** n - Nombre d'octets à remplir avec des zéros.
**
** RETOUR :
** Aucun.
**
** IMPLEMENTATION :
** La fonction utilise une boucle while pour parcourir la zone mémoire en partant
** de la fin et en se déplaçant vers le début. Pour chaque octet, elle le remplace
** par le caractère nul ('\0'), ce qui équivaut à la valeur zéro en ASCII.
**
** EXEMPLE D'UTILISATION :
**    char buffer[10];
**    ft_bzero(buffer, sizeof(buffer));
**    // buffer est maintenant rempli de zéros.
*/
#include <string.h>
void ft_bzero(void *s, size_t n)
{
    while (n != 0)
    {
        n--;
        ((unsigned char *)s)[n] = '\0';
    }
}