#include <stdio.h>
#include <string.h>

long int	ft_strlcpy(char *dest, char *src, long int size)
{
	long int	i;
	long int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

i t main()
{
	    
	char a[5] = ("");
	char b[37] = ("string of string");
    
	printf("%ld\n", strlcpy(a, b, 10));
   	printf("%ld\n", ft_strlcpy(a, b, 10));
	printf("%s\n", a);
}
