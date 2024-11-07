/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:37 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/07 11:51:02 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
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
		return (result *= ft_recursive_factorial(nb-1));
	}
}

#include <stdio.h>

int	main(void)
{
	printf("Pour -2, c'est : %d\n", ft_recursive_factorial(-2));
	printf("Pour 0, c'est : %d\n", ft_recursive_factorial(0));
	printf("Pour 2, c'est : %d\n", ft_recursive_factorial(2));
	printf("Pour 10, c'est : %d\n", ft_recursive_factorial(10));
}