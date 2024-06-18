/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:29:07 by ahavrank          #+#    #+#             */
/*   Updated: 2024/06/18 20:54:42 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numstrings(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
	i++;
	}
	return (j);
}
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

int	ft_split(char const *s, char c)
{
	int		*count;
	int		string_index;
	int		i;

	*count = ft_numstrings(s, c);
	char **s = malloc((*count + 1)  * (sizeof(char*)));
	i = 0;
	string_index = 0;
	while (i < ft_strlen(s))
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			if (ft_strchrpodobne(s) !=
			/* if (ft_strrchr - mohlo by se hodit, udelat i do i s touhle funkci, kde string by melo koncit) */
			buffer[j] = s[i];
			j++;
			i++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';
			s[string_index] = malloc(sizeof(char) * (ft_strlen(buffer) + 1));
			ft_strlcpy(s[string_index], buffer);
			string_index++;
		}
		if (i > old_i)
	} return (s);
}
/* int main(void)
{
	char const str[60] = "kdybych to byl byval tusil";
	char c = 'b';
	printf("%d", ft_split(str, c));
	return (0);
} */
