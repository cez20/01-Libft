#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *p_dst;
	char *p_src;
	size_t i;

	i = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	if (n == 0 || dst == src)
	 	return(dst);	
	while(i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return ((void *)dst);
}

int main ()
{
	char a[] = "Thomas";
	char b[] = "Carlos";

	ft_memcpy(a, b, 3);
	printf("%s\n%s\n", a, b);
}
