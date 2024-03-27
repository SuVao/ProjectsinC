/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:31:52 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/17 15:46:16 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int c)
{
	if (c < 9)
	{
		put_char('0');
		put_char(c + 48);
	}
}

void	dec_to_hex(char dec)
{
	int	resto;
	int	hex1;
	int	hex2;
	int	divisao;

	divisao = dec / 16;
	resto = dec % 16;
	if (resto < 10)
		hex2 = resto + '0';
	else
		hex2 = resto - 10 + 'a';
	if (divisao < 10)
		hex1 = divisao + '0';
	else
		hex1 = divisao - 10 + 'a';
	write(1, "\\", 1);
	write(1, &hex1, 1);
	write(1, &hex2, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			dec_to_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
