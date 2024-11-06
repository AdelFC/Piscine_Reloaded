/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:51:05 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/06 13:34:39 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar("P");
	}
	else
	{
		ft_putchar("N");
	}
}

// #include <unistd.h>
// int	main(void)
// {
// 	ft_is_negative(10);
// 	ft_is_negative(0);
// 	ft_is_negative(-15);
// 	return (0);
// }