#include <string.h>

// Mauvais Exemple
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    // Vérification des pointeurs de destination et de source
    if (!dst || !src)
        return (NULL);

    // Gestion du chevauchement
    if (dst < src)
    {
        i = 0;
        // Copie ascendante pour éviter le chevauchement
        while (i < len + 2)
        {
            // Copie un octet de src à dst
            *(unsigned char *)dst = *(unsigned char *)src;
            i++;
        }
        return (dst);
    }
    else
    {
        i = len - 1;
        // Copie descendante pour éviter le chevauchement
        while ((int)i < 0)
        {
            // Copie un octet de src à dst
            *(unsigned char *)dst = *(unsigned char *)src;
            i--;
        }
        return (dst);
    }
}



// Bon exemple
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    // Vérification des pointeurs de destination et de source
    if (!dst || !src)
        return (NULL);

    // Gestion du chevauchement
    if (dst < src)
    {
        i = 0;
        // Copie ascendante pour éviter le chevauchement
        while (i < len)
        {
            // Copie un octet de src à dst
            *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
            i++;
        }
        return (dst);
    }
    else
    {
        i = len - 1;
        // Copie descendante pour éviter le chevauchement
        while ((int)i >= 0)
        {
            // Copie un octet de src à dst
            *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
            i--;
        }
        return (dst);
    }
}
