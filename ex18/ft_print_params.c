/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:43:50 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/07 13:53:08 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i;

		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
            ft_putstr("\n");
			i++;
		}
	}
	else
		return (0);
}
