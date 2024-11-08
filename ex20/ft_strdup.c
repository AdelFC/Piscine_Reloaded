/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:39:46 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/08 09:43:04 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*tab;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(src));
	if (!tab)
		return (0);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n",ft_strdup(argv[1]));
	}
	else
		return (0);
}