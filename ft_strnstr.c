/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:19:33 by ahavrank          #+#    #+#             */
/*   Updated: 2024/06/17 20:13:33 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		x;

	i = 0;

	while (haystack[i] != '\0' && i <= len)
	{
		x = 0;
		while (haystack[i] == needle[x] && needle[x] != '\0')
		{
			i++;
			x++;
		}
		if (needle[x] == '\0')
			return (&((char *)haystack)[i - x]);
		i = i - x;
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char hay[50] = "filip na me divne cucuci";
	char knee[30] = "cuci";
	size_t len = 27;
	printf("%s", ft_strnstr(hay, knee, len));
	return (0);
} */
