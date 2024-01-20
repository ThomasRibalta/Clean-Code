#include <string.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int n;
    int n_len;
    char *s;
    
    n = ft_atoi_base(nbr, base_from); // Convertit la chaîne en entier.
    n_len = ft_putnbr_base_len(n, base_to); // Calcule la longueur nécessaire.
    s = (char *)malloc(n_len + 1); // Alloue la mémoire pour la chaîne résultante.
    if (!check_base(base_from) || !check_base(base_to) || !n)
        return NULL;
    if (!s)
        return NULL;

    // Initialise la chaîne avec le caractère 'x' (potentiellement une erreur).
    for (int i = 0; i < n_len; ++i)
        s[i] = 'x';

    // Ajoute le signe '-' si n est négatif.
    if (n < 0)
        s[0] = '-';
    s[n_len] = '\0'; // Ajoute le caractère nul de fin de chaîne.

    // Remplit la chaîne avec la représentation de n dans la base 'base_to'.
    ft_putnbr_base(n, base_to, s + n_len - 1);
    return s; // Retourne le pointeur vers la chaîne résultante.
}
