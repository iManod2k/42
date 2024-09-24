#include <unistd.h>
void *ft_memchr(const char *s, int c, size_t n);

void *ft_memchr(const char *s, int c, size_t n)
{	
	size_t cont;
	
	cont = 0;
	while (*s != c && cont < n)
	{
		cont++;
		s++;
	}
	
	if (cont == n)
		return ('\0');
	
	return ((char *)s);
}


#include <stdio.h>

int main(void)
{
	char s1[] = "abcdef";
	
	printf("%s", (char *)ft_memchr(s1, 'x', 4));
	
	return (0);
}
