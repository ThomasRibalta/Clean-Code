// Mauvais exemple

int compterLettresEtMots(char *phrase, int *nombre_de_mots)
{
    int nombre_lettres;
    int est_dans_un_mot;
    int i;

    i = 0;
    est_dans_un_mot = 0;
    nombre_lettres = 0;

    if (!phrase || !nombre_de_mots)
    {
        return;
    }
    while (phrase[i] != '\0')
    {
        if ((phrase[i] >= 'a' && phrase[i] <= 'z') || (phrase[i] >= 'A' && phrase[i] <= 'Z'))
        {
            nombre_lettres++;
            est_dans_un_mot = 1;
        }
        else
        {
            if (est_dans_un_mot)
            {
                (*nombre_de_mots)++;
                est_dans_un_mot = 0;
            }
        }
        i++;
    }
    if (est_dans_un_mot)
    {
        (*nombre_de_mots)++;
    }
    return (nombre_lettres);
}

// Bon exemple
int	nombreDeMots(char *phrase)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (phrase[i])
	{
		if (phrase[i] != ' ' && (phrase[i + 1] == ' ' || phrase[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

int nombreDeLettres(char *phrase)
{
    int compteurLettre;

    compteurLettre = 0;
    while(phrase[compteurLettre])
        compteurLettre++;
    return (compteurLettre);
}