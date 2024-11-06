/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:52:55 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/06 09:00:15 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	M;
// 	int	N;

// 	M = 12;
// 	N = 24;
// 	printf("Avant swap :%d ,%d", M, N);
// 	printf("\n");
// 	ft_swap(&M, &N);
// 	printf("Apres swap :%d ,%d", M, N);
// 	return (0);
// }