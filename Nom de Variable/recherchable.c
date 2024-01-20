#include <stdio.h>

// Mauvais Exemple

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memoire;
	size_t			index;

	memoire = (unsigned char *)s;
	index = 0;
	while (n > index)
	{
		if (memoire[index] == (unsigned char)c)
			return ((void *)(memoire + index));
		index++;
	}
	return (NULL);
}

// Bon exemple
void	*ft_memchr(const void *voidStringMem, int characterChr, size_t sizeStringMem)
{
	unsigned char	*memoireChr;
	size_t			indexChr;

	memoireChr = (unsigned char *)voidStringMem;
	indexChr = 0;
	while (sizeStringMem > indexChr)
	{
		if (memoireChr[indexChr] == (unsigned char)characterChr)
			return ((void *)(memoireChr + indexChr));
		indexChr++;
	}
	return (NULL);
}