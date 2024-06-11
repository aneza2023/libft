/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:19:33 by ahavrank          #+#    #+#             */
/*   Updated: 2024/06/11 20:56:40 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*start;

	i = 0;
	start = NULL;
	while (haystack[i] != '\0' && i <= len)
	{
		if (haystack[i] == needle[i])
		{
			start = &((char *)needle)[i];
		}
		i++;
	}
	return (start);
}

int main(void)
{
	char hay[50] = "filip na me divne cuci";
	char knee[30] = "cuci";
	size_t len = 25;
	printf("%s", ft_strnstr(hay, knee, len));
	return (0);
}
