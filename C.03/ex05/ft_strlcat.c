/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:23:49 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/20 16:49:11 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	res;
	unsigned int	b;

	b = 0;
	a = 0;
	res = 0;
	while (dest[a] != '\0')
		a++;
	while (src[res] != '\0')
		res++;
	if (size <= a)
		return (res += size);
	while ((a + b) < size - 1 && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	res = a + b;
	return (res);
}
/*int	main()
{
	char	src[] = "ola caralho";
	char	*dest;

	dest = malloc(100);
	dest[0] = 'a';
	dest[1] = 'b';
	dest[2] = 'c';
	dest[3] = ' ';
	printf("%d\n", ft_strlcat(dest, src, 17));
	printf("%s \n", dest);
	free(dest);
	return (0);
}*/
