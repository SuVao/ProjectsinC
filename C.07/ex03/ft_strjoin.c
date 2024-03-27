/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:19:41 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/18 20:53:36 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	totaltam;
	int	i;
	int	j;

	totaltam = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			totaltam++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	return (totaltam + (i * (size - 1)));
}

void	ft_strcat(int size, char **str, char *sep, char *new_str)
{
	int	i;
	int	j;
	int	h;

	h = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
			new_str[h++] = str[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				new_str[h++] = sep[j++];
		}
		i++;
	}
	new_str[h] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strn;
	char	*new_str;
	int		total;

	if (size == 0)
	{
		strn = malloc(sizeof(char));
		if (strn == NULL)
			return (NULL);
		*strn = '\0';
		return (strn);
	}
	total = ft_strlen(size, strs, sep);
	new_str = malloc(total * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strcat(size, strs, sep, new_str);
	return (new_str);
}
/*int	main()
{
	char *array[]= {"ola ", "tudo ", "bem ", "contigo "};
	char *array1 = "bolas ";
	char *ptr;
	
	ptr = ft_strjoin(0, array, array1);
	printf("%s", ptr);
	free (ptr);
	return (0);
}*/
