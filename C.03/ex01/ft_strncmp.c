/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:59:44 by pesilva-          #+#    #+#             */
/*   Updated: 2024/03/09 18:37:14 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
