/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:11:53 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/18 20:27:38 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		i++;
	}
	return (0);
}

int	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			j = 1;
			while (j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					temp = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = temp;
				}
				j++;
			}
			i++;
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
