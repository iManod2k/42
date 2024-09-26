#include <stdlib.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set);
size_t ft_strlen(const char *src);

size_t ft_strlen(const char *src)
{
	size_t cont;
	
	cont = 0;
	while(src[cont] != '\0')
		cont++;
	
	return (cont);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimmed_str;
	size_t start;
	size_t end;
	size_t aux;
	size_t set_count;
	size_t set_len;
	
	trimmed_str = 0;
	start = 0;
	end = ft_strlen(s1);
	aux = 0;
	set_count = 0;
	set_len = ft_strlen(set);
	
	while (set[set_count] && set_count < set_len)
	{
		if (set[set_count] == s1[start])
		{
			set_count = 0;
			start++;
		}
		else
			set_count++;
	}
	
	set_count = 0;
	
	while (set[set_count] && set_count < set_len)
	{
		if (set[set_count] == s1[end - 1])
		{
			set_count = 0;
			end--;
		}
		else
			set_count++;
	}
	
	trimmed_str = (char *) malloc((end - start) * sizeof(char));
	
	while (start < end)
	{
		trimmed_str[aux] = s1[start];
		aux++;
		start++;
	}
	trimmed_str[aux] = '\0';
	return (trimmed_str);
}

int main(void)
{
	printf("%s", ft_strtrim("abaxxxzba", "abbbz"));
	return (0);
}