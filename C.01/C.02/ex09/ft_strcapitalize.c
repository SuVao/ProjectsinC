/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:05:00 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/07 11:17:01 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	buffer;

	buffer = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (buffer && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!buffer && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			buffer = 0;
		}
		else
			buffer = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	return (0);
}*/
