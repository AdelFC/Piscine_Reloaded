/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d                                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:12:27 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/08 10:12:30 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	m;
	int	*tab;

	m = max - min;
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	if (min < max)
	{
		while (i < (max - min))
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
	else
		return (0);
}