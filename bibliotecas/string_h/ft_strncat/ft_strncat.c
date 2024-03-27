#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int 	main()
{
	char	src[] = { "Mundo." };
	char	dest[] = { "Ola " };
	ft_strncat(dest, src, 3);
	ft_putstr(dest);
	return (0);
}*/