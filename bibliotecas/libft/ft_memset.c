#include <stdio.h>
#include <string.h>

void *ft_memset(void *ptr, int value, int num)
{
	int		i;
	unsigned char	*char_ptr;

	i = 0;
	char_ptr = ptr;
	while (i < num)
		char_ptr[i++] = value;
	return (ptr);
}

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);

   return(0);
}
