/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:24:37 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/17 12:42:18 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c )
{
	write(1, &c, 1);
}

void	int_to_char(int c)
{
	char	a;
	char	b;

	if (c > 9)
	{
		a = c / 10 + 48;
		b = c % 10 + 48;
		put_char(a);
		put_char(b);
	}
	else
	{
		put_char('0');
		put_char(c + 48);
	}
}

void	resultado(int a, int b)
{
	int_to_char(a);
	put_char(' ');
	int_to_char(b);
	if (a < 98 && b <= 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			resultado(a, b);
			b++;
		}
		a++;
	}
}
