#include <stdio.h>
#include <string.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	p_dest = dest;
	p_src = (char *)src;
	if (p_src < p_dest)
		while (n--)
		{
			p_dest[n] = p_src[n];
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}


int main ()
{
	char a[] = "Thomas";
	char b[] = "RobertoBaggio";

	ft_memmove(a, b, 13);
	printf("%s\n%s\n",a, b);
}
