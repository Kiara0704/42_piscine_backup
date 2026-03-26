/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 23:49:14 by kewang            #+#    #+#             */
/*   Updated: 2026/03/19 17:42:58 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = " ";
	char	*s3 = "World!";
	
	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d\n", ft_str_is_alpha(s2));
	printf("%d\n", ft_str_is_alpha(s3));
	return (0);
}*/

/*if (str[i] == '\0' || (str[i] >= 'a' && str[i] <= 'z') 
	|| (str[i] >= 'A' && str[i] <= 'Z'))
	{
		return (1);
	}*/