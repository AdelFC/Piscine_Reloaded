/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:51:05 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/06 09:00:29 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
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