/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:44:42 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/06 13:29:30 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = 48;
	while (numbers < 58)
	{
		ft_putchar(numbers);
		numbers++;
	}
}

// #include <unistd.h>
// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }