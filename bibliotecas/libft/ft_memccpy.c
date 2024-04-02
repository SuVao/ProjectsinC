#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	const char	*char_src;
	char		*char_dest;

	i = 0;
	char_src = src;
	char_dest = dest;
	while (i < n && char_src[i] != c)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	char_dest[i] = '\0';
	return (dest);
}

int main()
{
	const char	src[] = {"ola caralho!"};
	char	dest[20];
	
	ft_memccpy(dest, src, 97, 6);
	printf("%s \n", dest);
	return (0);
}