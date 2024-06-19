

#include <stdio.h>
#include "libft.h"

/* char *ft_strchrpodobne(const char *s, int c)
{
	int i;
	char *start;

	i = 0;
	start = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
		start = &((char *)s)[i];
	}
	return (start);
} */

// int	findnextstart(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 			break ;
// 		i++;
// 	}
// 	return (i);
// }

/* int	numb_int(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
} */

/* char	*ft_obraceni(char *str)
{
	char	*temp;
	int		i;
	int		k;

	i = 0;
	k = ft_strlen(str) - 1;
	temp = malloc(ft_strlen(str) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		temp[i] = str[k];
		k--;
		i++;
	}
	temp[ft_strlen(str)] = '\0';
	return (temp);
} */

int main(void)
{
	char str[60] = "kdybych to byl byval tusil";
	int c = 'y';
	int n = 467;
	// printf("%d", findnextstart(str, c));
	printf("%s", ft_obraceni(str));
	return (0);
}
