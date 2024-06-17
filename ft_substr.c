/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:29:06 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 20:50:50 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;
	int		v;

	v = ft_strlen(s) - start - len;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	temp = malloc((len + v) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < len - 1 && s[start + i] != '\0')
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

/* int main(void)
{
    char const str[50] = "gabina ma zase dovolenou";
    unsigned int start = 10;
    size_t len = 5;
    printf("%s", ft_substr("gabina ma zase dovolenou", start, len));
    return (0);
} */
