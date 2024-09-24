#include <unistd.h>
int ft_tolower(int c);

int ft_tolower(int c)
{	
	return ( c >= 'A' && c <= 'Z' ? c + 32 : c);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "ASD";
	
	printf("%c", ft_tolower(src[0]));
	printf("%s", src);
	
	return (0);
}
*/