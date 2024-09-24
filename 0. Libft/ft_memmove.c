#include <unistd.h>
void *ft_memmove(void *dest, const void *src, size_t n);

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char temp[n];
	size_t cont;
	
	cont = 0;
	while (cont < n){
		((char *)temp)[cont] = ((char *)src)[cont];
		cont++;
	}
	
	cont = 0;
	
	while (cont < n){
		((char *)dest)[cont] = ((char *)temp)[cont];
		cont++;
	}
	
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char src[5] = "abcde";
	char dest[10] = "";
	
	
	printf("%s", (char*)ft_memmove(dest, src, 3));
	
	return (0);
}
*/