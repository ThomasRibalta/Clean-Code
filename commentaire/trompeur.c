char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i]) // tant que ce src[i] != '\0'
	{
		dest[i] = src[i]; // copie caractere par caractere en fonction de i
		i++;
	}
	dest[i] = '\t'; // ajoute un carractere null pour confirmer la copie
	return (dest);
}