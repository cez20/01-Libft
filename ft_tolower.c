#include <stdio.h>

int	ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (c + 32);
	else
	 	return(c);
}

int main()
{
	char a = 'A';

	printf("%d\n", ft_tolower(a));
}
