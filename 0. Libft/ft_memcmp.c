#include <unistd.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t cont;
	char *p1;
	char *p2;
	
	cont = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	
	while ( (*p1 == *p2) && cont < n )
	{
		p1++;
		p2++;
		cont++;
	}
	
	return ( *p1 - *p2 );
}




int main(void)
{
	char s1[] = "";
	char s2[] = "";
	
	printf("%i", ft_memcmp(s1, s2, 4));
	
	return (0);
}
