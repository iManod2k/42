#include <unistd.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len);
size_t ft_strlen(const char *src);

size_t ft_strlen(const char *src)
{
	size_t cont;
	
	cont = 0;
	while(src[cont] != '\0')
		cont++;
	
	return (cont);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t cont;
	//size_t big_len;
	
	cont = 0;
	//big_len = ft_strlen(big);
	if (little[0] == '\0')
		return ((char *)big);
	
	while (*big != '\0')
	{
		while (*big == *little)
		{
			big++;
			little++;
			cont++;
		}
		
		if (cont == len)
		{
			//printf("%s", big);
			big -= len;
			return ((char *)big);
		}else
		{
			little = &little[0];
			cont = 0;
		}
		
		big++;
	}

	//printf("Final %i", len);
	return ('\0');
}




int main(void)
{
	char s1[] = "aaabbaaa";
	char s2[] = "";
	
	printf("%s", ft_strnstr(s1, s2, 2));
	
	return (0);
}
