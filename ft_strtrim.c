/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:58:07 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/18 14:48:09 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
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
	while (s1[i] != '\0')
	{
		if (is_in_set(set, s1[i]) == 1)
			i++;
		else
			break;
	}
	k = ft_strlen(s1) - 1;
	while (k != i)
	{
		if (is_in_set(set, s1[k]) == 1)
			k--;
		else
			break;
	}
	temp = malloc((k - i) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	j = 0;
	while (i != k)
	{
		temp[j] = s1[i];
		j++;
		i++;
	}
	temp[j] = '\0';
	return (temp);
}

int main(void)
{
    char str[50] = "jkmkjmllkNAOMIjklmlkj";
    char set[50] = "jkm";
	printf("%d", is_in_set((set), 'k'));
    printf("%s", ft_strtrim(str, set));
    return (0);
}

