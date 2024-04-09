#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	char	*s1;
	int		i;
	int		sign;
	int		res;

	res = 0;
	sign = 1;
	i = 0;
	s1 = (char *)str;
	while (s1[i] <= 32)
		i++;
	if (s1[i] == '+' || s1[i] == '-')
	{
		if (s1[i] == '-')
			sign *= -1;
		i++;
	}
	while (s1[i] >= '0' && s1[i] <= '9')
	{
		res = res * 10 + (s1[i] - '0');
		i++;
	}
	return (res * sign);
}
/*int		main()
{
	const char	s1[] = {"    -3124"};
	int		res1;
	int		res2;

	res1 = ft_atoi(s1);
	res2 = atoi(s1);
	printf("ft_atoi: %d \natoi: %d\n", res1, res2);
	return (0);
}*/