/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:05:08 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/18 13:57:41 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(int base_tam, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_tam <= 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	nega;

	nega = 1;
	res = 0;
	i = 0;
	if (str[i] == '-')
		nega *= -1;
	while (str[i] != '\0')
	{
		if ((str[i] <= '9' && str[i] >= '0') 
			|| (str[i] <= 'a' && str[i] >= 'f'))
			res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * nega);
}

int	ft_putnbr_base(int nbr, char *base)
{
	long	lnb;
	long	base_tam;
	long	resu;

	resu = 0;
	lnb = nbr;
	base_tam = ft_strlen(base);
	if (base_check(base_tam, base) == 0)
	{
		if (lnb < 0)
		{
			lnb = lnb * -1;
			write(1, "-", 1);
		}
		if (lnb < base_tam)
			write(1, &base[lnb], 1);
		else
			resu = ft_putnbr_base(lnb / base_tam, base);
	}
	return (resu);
}

int	ft_atoi_base(char *str, char *base)
{
	long	res;
	int		tam1;
	int		tam2;
	int		nega;
	int		i;

	i = 0;
	nega = 1;
	tam1 = ft_strlen(str);
	tam2 = ft_strlen(base);
	res = 0;
	if (base_check(tam2, base) == 0)
	{
		while (str[i] != '\0')
		{
			res = ft_putnbr_base(ft_atoi(&str[i]), base);
			i++;
		}
	}
	return (res);
}

void	ft_atoi_base_test(char *str, char *base, int expected_number)
{
	int ft_buff;

	ft_buff = ft_atoi_base(str, base);
	if (ft_buff != expected_number)
		printf("> KO, expected: %d got: %d\n", expected_number, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int	main(void)
{
	// teste com bases binarias
	printf("Bases binarias:\n");
	ft_atoi_base_test("\n \t\r \v \f++++--1000,.fs", "01", 8);
	ft_atoi_base_test("\n \t\r \v \f++++--*/*/**,.fs", "/*", 43);
	// teste com bases octais
	printf("Bases octais:\n");
	ft_atoi_base_test("\n \t\r \v \f++-++--205,.fs", "01234567", -133);
	ft_atoi_base_test("\n \t\r \v \f+-+++--fdd,.fs", "abcdefgh", -347);
	// teste com bases decimais
	printf("Bases decimais:\n");
	ft_atoi_base_test("\n \t\r \v \f++-++--2147483648,.fs", "0123456789", -2147483648);
	ft_atoi_base_test("\n \t\r \v \f+-+++-+jjf,.fs", "abcdefghij", 995);
	// teste com bases hexadecimais
	printf("Bases hexadecimais:\n");
	ft_atoi_base_test("\n \t\r \v \f++-+-+--F0FA,.fs", "0123456789ABCDEF", 61690);
	ft_atoi_base_test("\n \t\r \v \f+-+++-+ninc,.fs", "abcdefghijklmnop", 55506);
	// teste com bases invalidas
	printf("Bases invalidas:\n");
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123456678", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\n", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\v", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\t", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\f", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\r", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123 ", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123+", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123-", 0);
}
