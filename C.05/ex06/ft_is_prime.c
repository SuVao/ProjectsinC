/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:35:03 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/14 13:12:20 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div;

	div = 0;
	i = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			div++;
		i++;
	}
	if (div <= 2)
		return (1);
	return (0);
}
/*
int main()
{
	int	res;

	res = ft_is_prime(7);
	printf("%d \n", res);
	return (0);
}*/
