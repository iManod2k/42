#include <unistd.h>
size_t ft_strlcpy(char *dst, const char *src, size_t n);

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t cont;
	
	cont = 0;
	while ( (src[cont] != '\0') && cont < n) 
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	
	return (cont);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "asd";
	char dest[] = "xxx";
	
	
	printf("%u\n", (unsigned int)ft_strlcpy(dest, src, 2));
	printf("%s", dest);
	
	return (0);
}
*/