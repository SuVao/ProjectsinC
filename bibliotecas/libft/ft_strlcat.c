/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:42:41 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:42:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		a;
	size_t		b;
	size_t		c;

	a = 0;
	b = 0;
	c = 0;
	while (src[a] != '\0')
		a++;
	while (dest[b] != '\0')
		b++;
	if (size <= b)
		return (a += size);
	while ((a + c) < size - 1 && src[a] != '\0')
	{
		dest[a + c] = src[c];
		c++;
	}
	dest[a + c] = '\0';
	return (a + c);
}

/*int		main()
{
	char			dest[] = { "puta que " };
	const char		src[] = { "pariu!"};
	size_t			i;
	size_t			res;

	i = 7;
	res = ft_strlcat(dest, src, i);
	printf("tamanho da string final: %ld \n", res);
	return (0);
}*/