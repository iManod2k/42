#include <unistd.h>
int ft_toupper(int c);

int ft_toupper(int c)
{	
	return ( c >= 'a' && c <= 'z' ? c - 32 : c);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "asd";
	
	printf("%c", ft_toupper(src[0]));
	printf("%s", src);
	
	return (0);
}
*/