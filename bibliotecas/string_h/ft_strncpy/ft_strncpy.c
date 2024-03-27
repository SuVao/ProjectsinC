#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char	src[] = {"ola caralho!"};
	char	dest[] = {""};

	printf("string final: %s\n", ft_strncpy(dest, src, 5));
	return (0);
}