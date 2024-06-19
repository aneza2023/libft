/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:36:03 by ahavrank          #+#    #+#             */
/*   Updated: 2024/06/19 21:47:00 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char naomi(unsigned int i, char n) {
	n = n - i;
	return n;
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		i;

	temp = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		temp[i] = (*f)(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int main(void) {
	printf("%s", ft_strmapi("naomi", &naomi));
}
