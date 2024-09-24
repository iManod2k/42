#include <unistd.h>
int ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t cont;
	
	cont = 0;
	while ( (*s1 == *s2) && cont < n)
	{
		s1++;
		s2++;
		cont++;
	}

	return (*s1 - *s2);
}

#include <stdio.h>

int main(void)
{
	char s1[] = "a";
	char s2[] = "abcd";
	
	printf("%i", ft_strncmp(s1, s2, 3));
	
	return (0);
}
