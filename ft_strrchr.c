/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:14:43 by ahavrank          #+#    #+#             */
/*   Updated: 2024/05/23 18:13:51 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
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
