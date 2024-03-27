#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(void)
{
	char	s1[] = {"ola caralho"};
	char	s2[] = {""};

	printf("%s \n", ft_strcpy(s2, s1));
	return 0;
}