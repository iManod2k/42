#include <unistd.h>
char *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *src);

size_t ft_strlen(const char *src)
{
	size_t cont;
	
	cont = 0;
	while(src[cont] != '\0')
		cont++;
	
	return (cont);
}

char *ft_strchr(const char *s, int c)
{	
	size_t src_len;
	size_t cont;
	
	src_len = ft_strlen(s);
	cont = 0;
	while (*s != c && cont < src_len)
	{
		cont++;
		s++;
	}
	
	if (cont == src_len)
		return ('\0');
	
	return ((char *)s);
}

/*
#include <stdio.h>
int main(void)
{
	char src[] = "asd Campbell";
	
	printf("%s\n", ft_strchr(src, 'm'));
	printf("%s", src);
	
	return (0);
}
*/