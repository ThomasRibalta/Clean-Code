#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(ft_strlen(src) * sizeof(char));
    // dup = malloc(sizeof(char *));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
    // dup[i] = NULL;
	return (dup);
}