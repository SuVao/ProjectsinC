/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:12:38 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/14 13:11:47 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	res = 0;
	i = 1;
	while (res < nb)
	{
		res = 0;
		res = i * i;
		i++;
	}
	i = i - 1;
	if ((i * i) != nb)
		return (0);
	else
		return (i);
}
/*
int main ()
{
	int	i;

	i = ft_sqrt(144);
	printf("%d  \n", i);
	return (0);
}*/
