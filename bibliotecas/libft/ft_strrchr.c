#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s1;
	char	*s2;
	int		j;

	s1 = (char *)str;
	i = 0;
	while (s1[i] != '\0')
		i++;
	i--;
	while (s1[i] != c)
	{
		if (s1[i] == c)
			break;
		i--;
	}
	s2 = (char *)malloc(sizeof(char) * ((ft_strlen(s1) - i) + 1));
	if (s2 == NULL)
		return (0); 
	while (s1[i] != '\0')
		s2[j++] = s1[i++];
	s2[j] = '\0';
	printf("string corrida para tras i : %d \n", i);
	return (s2);
}

int main () {

   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '5';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   free(ret);
   return(0);
}