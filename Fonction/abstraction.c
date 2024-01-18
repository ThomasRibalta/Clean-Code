// Mauvais maniere de faire
char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	int		nombre_mots;
	char	**tab;

	i = 0;
	j = 0;
	nombre_mots = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nombre_mots++;
		i++;
	}
	tab = malloc(sizeof(char *) * (nombre_mots + 1));
	if (!tab)
		return (0);
	i = 0;
	while (s[i])
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			tab[j] = malloc(sizeof(char) * (i + 1));
			while (s[i] != '\0' && s[i] != c)
			{
				tab[j][i] = s[i];
				i++;
			}
			tab[j][i] = '\0';
			j++;
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	tab[j] = 0;
	return (tab);
}

// Bonne maniere

int	count_words(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

int	ft_strlenc(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char	*get_word(char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (ft_strlenc(str, c) + 1));
	while (i < ft_strlenc(str, c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (0);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			tab[i] = get_word(s, c);
			i++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	tab[i] = 0;
	return (tab);
}

