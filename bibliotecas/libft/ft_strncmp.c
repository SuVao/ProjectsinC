#include <unistd.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int nb)
{
	unsigned int		i;

	i = 0;
	while (i < nb && (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (nb == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int		main()
{
	char	s1[] = { "aaaa"};
	char	s2[] = { "abaaa"};

	printf("strncmp: %d", ft_strncmp(s1, s2, 2));
	return 0;
}*/
