

#include <stdio.h>

char *ft_strchrpodobne(const char *s, int c)
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
}
int main(void)
{
    char const str[60] = "kdybych to byl byval tusil";
    int c = 'b';
    printf("%s", ft_strchrpodobne(str, c));
    return (0);
}
