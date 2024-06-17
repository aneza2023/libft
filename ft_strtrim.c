/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:58:07 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 21:58:13 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == 'c')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		j;
	char	*temp;

	i = 0;
	while (s1[i] != '\0' && is_in_set(set, s1[i]) == 1)
		i++;
	k = ft_strlen(s1) - 1;
	while (k != i && is_in_set(set, s1[k]) == 1)
		k--;
	temp = malloc((k - i) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		temp[j] = s1[j];
		j++;
	}
	return (temp);
}

int main(void)
{
    char str[50] = "jkmkjmllkNAOMIjklmlkj";
    char set[50] = "jkm";
    printf("%s", ft_strtrim(str, set));
    return (0);
}

