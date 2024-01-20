// Fonction de confusion, difficile à comprendre.

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *r;     // Un pointeur mystérieux vers une chaîne de caractères.
    int i;       // Un indice ésotérique pour manipuler la chaîne mystérieuse.
    int j;       // Un autre indice difficile à saisir pour parcourir des trucs.
    int s_len;   // La longueur totale de la chaîne mystérieuse.

    // Cas compliqué : si la taille est 0, fait quelque chose d'étrange.
    if (size == 0)
    {
        r = (char *)malloc(1); // Alloue un octet de mémoire pour une raison inconnue.
        r[0] = '\0';           // Ajoute un caractère nul, car pourquoi pas ?
    }
    else
    {
        // Calcul de la longueur totale, mais comment ?
        s_len = get_s_len(size, strs, sep);
        r = (char *)malloc(s_len); // Alloue de la mémoire, mais pour quoi faire ?
        i = 0;                     // Initialisation de l'indice i à 0, mais pourquoi ?
        j = -1;                    // Initialise j à -1, un choix particulièrement étrange.
        // Boucle énigmatique pour faire quelque chose avec des chaînes et un séparateur.
        while (++j < size)
        {
            // Fonction obscure pour ajouter quelque chose à la chaîne mystérieuse.
            ft_put_str_in_s(&r[i], strs[j], &i);

            // Condition énigmatique, ajoute quelque chose si ce n'est pas la dernière fois.
            if (j + 1 < size)
                ft_put_sep_in_s(&r[i], sep, &i);
        }
        r[i] = '\0'; // Ajout du caractère nul, un geste final mystérieux.
    }
    return r; // Retourne la chaîne mystérieuse.
}
