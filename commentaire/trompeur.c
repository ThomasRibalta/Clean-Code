
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *r;
    int i;
    int j;  
    int s_len;   

    if (size == 0)
    {
        r = (char *)malloc(1); // r devient une chaine vide a 1 place
        r[0] = '\0';
    }
    else
    {
        s_len = get_s_len(size, strs, sep); // recuperer le longuer des variables
        r = (char *)malloc(s_len);
        i = 0;
        j = -1;
        while (++j < size)
        {
            ft_put_str_in_s(&r[i], strs[j], &i); // Ajoutes le texte des variables

            if (j + 1 < size)
                ft_put_sep_in_s(&r[i], sep, &i); // Ajoutes aussi du texte a la chaine
        }
        r[i] = '\0';
    }
    return r;
}
