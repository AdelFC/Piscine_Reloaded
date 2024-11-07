/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:31:05 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/07 12:49:21 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb - 1;
	result = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (i > 0)
		{
			result *= i;
			i--;
		}
		return (result);
	}
}

#include <stdio.h>

int	main(void)
{
	printf("Pour -2, c'est : %d\n", ft_iterative_factorial(-2));
	printf("Pour 0, c'est : %d\n", ft_iterative_factorial(0));
	printf("Pour 2, c'est : %d\n", ft_iterative_factorial(2));
	printf("Pour 10, c'est : %d\n", ft_iterative_factorial(10));
}
