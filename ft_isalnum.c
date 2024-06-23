/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:45:30 by ahavrank          #+#    #+#             */
/*   Updated: 2024/06/23 22:35:04 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c > 64 && c < 123))
	{
		return (1);
	}
	return (0);
}

/* int	main(void)
{
	int	c;

	c = 'a';
	printf("%d", ft_isalnum(c));
	return (0);
} */
