#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlen(const char *src);

size_t ft_strlen(const char *src)
{
	size_t cont;
	
	cont = 0;
	while(src[cont] != '\0')
		cont++;
	
	return (cont);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	
	char	*new_string;
	size_t	s1_len = ft_strlen(s1);
	size_t	s2_len = ft_strlen(s2);
	size_t	both_sizes_len = s1_len + s2_len;
	size_t	cont;
	
	cont = 0;
	new_string = (char *)malloc(both_sizes_len * sizeof(char));
	if (new_string == NULL)
		return (0);
	
	while (s1[cont] != '\0')
	{
		new_string[cont] = s1[cont];
		cont++;
	}
	
	cont = 0;
	
	while (s2[cont] != '\0')
	{
		new_string[cont + s1_len] = s2[cont];
		cont++;
	}
	
	new_string[s1_len + s2_len] = '\0';
	return (new_string);
}

#include <stdio.h>
int main(void)
{
	char *frase = ft_strjoin("Hola", " world");
	printf("%s\n", frase);
	return (0);
}
