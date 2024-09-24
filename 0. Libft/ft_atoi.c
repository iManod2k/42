#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *nptr);
int ft_pow(int num, int pow);

int ft_pow(int n, int pow)
{
	int num;
	
	num = 1;
	if (pow <= 0)
		return (1);
	while (pow > 0)
	{
		num *= n;
		pow--;
	}
	return (num);
}
int ft_atoi(const char *nptr)
{
	int num;
	int cont;
	int cont_aux;
	int diez;
	
	num = 0;
	cont = 0;
	cont_aux = 0;
	diez = 1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nptr++;
		cont++;
	}
	
	nptr -= cont;
	
	while (cont > 0)
	{
		num += ft_pow(10, cont-1) * (*nptr - '0');
		cont--;
		nptr++;
	}
	
	return (num);
}




int main(void)
{
	
	int num = ft_atoi("321-123");
	
	printf("%i", num);
	
	return (0);
}
