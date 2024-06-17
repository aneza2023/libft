/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:02 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 20:09:24 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	int		i;

	temp = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

/* int main(void)
{
    char str[50] = "hellou";
    printf("%s", ft_strdup(str));
    return (0);
} */
