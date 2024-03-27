/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:05:09 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/20 18:44:32 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *str)
{
	char	*new_string;

	new_string = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (*str)
		new_string++ = str++;
	new_string = '\0';
	return (new_string);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*string;

	i = 0;
	string = malloc(sizeof(char) * (ac + 1));
	if (!(*string))
		return (NULL);
	while (i < ac)
	{
		string[i].size = ft_strlen(av[i]);
		string[i].str = av[i];
		string[i].copy = ft_strdup(av[i]);
	}
	string.str = 0;
	return (*string);
}
