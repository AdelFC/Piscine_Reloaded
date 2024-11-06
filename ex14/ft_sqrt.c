/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:48:04 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/06 10:49:00 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) < nb && i < 46341)
	{
		i++;
	}
	if (nb == (i * i))
	{
		return (i);
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Pour -10, c'est: %d\n", ft_sqrt(-10));
	printf("Pour 0, c'est: %d\n",ft_sqrt(0));
	printf("Pour 9, c'est: %d\n",ft_sqrt(9));
	printf("Pour 16, c'est: %d\n",ft_sqrt(16));
	printf("Pour 17, c'est: %d\n",ft_sqrt(17));
	printf("Pour INT_MAX, c'est: %d\n",ft_sqrt(2147483647));
}*/