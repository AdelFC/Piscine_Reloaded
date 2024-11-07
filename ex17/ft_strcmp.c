/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:25:33 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/07 13:38:19 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *first_str1 = "bfb";
// 	char *second_str1 = "gfg";

// 	printf("First String: %s\n", first_str1);
// 	printf("Second String: %s\n", second_str1);

// 	printf("Return value of strcmp(): %d\n", strcmp(first_str1, second_str1));
// 	printf("Return value of ft_strcmp(): %d\n", ft_strcmp(first_str1,
// 			second_str1));

// 	char *first_str2 = "Geeks";
// 	char *second_str2 = "Geeks";

// 	printf("First String: %s\n", first_str2);
// 	printf("Second String: %s\n", second_str2);

// 	printf("Return value of strcmp(): %d\n", strcmp(first_str2, second_str2));
// 	printf("Return value of ft_strcmp(): %d\n", ft_strcmp(first_str2,
// 			second_str2));
// 	return (0);
// }