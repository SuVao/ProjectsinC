#include <stdio.h>

char	*ft_strcat(char *s1, char *s2)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	return (s1);
}
/*int main()
{
	char	s1[] = {"ola "};
	char 	s2[] = {"caralho!"};

	printf("%s \n", ft_strcat(s1, s2));
	return (0);
}*/