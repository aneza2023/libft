/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:31:24 by ahavrank          #+#    #+#             */
/*   Updated: 2024/05/23 17:39:45 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*start;

	i = 0;
	start = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			start = &((char *)s)[i];
			break ;
		}
		i++;
	}
	return (start);
}

int	main(void)
{
	const char s[50] = "to be or not to be";
	int c = 'o';
	printf("%s", ft_strchr(s, c));
	return (0);
}
