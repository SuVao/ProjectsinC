/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:44:07 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:44:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s1;
	int		count;

	i = 0;
	s1 = (char *)str;
	count = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			count++;
		i++;
	}
	if (count == 0)
		return (0);
	i--;
	while (s1[i] != c)
	{
		if (s1[i] == c)
			break ;
		i--;
	}
	return (&s1[i]);
}

/*int main () {

   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}*/