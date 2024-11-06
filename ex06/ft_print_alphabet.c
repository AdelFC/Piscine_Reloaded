/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:10:07 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/06 09:36:04 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 97;
	while (alphabet < 123)
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet ();
// 	return (0);
// }