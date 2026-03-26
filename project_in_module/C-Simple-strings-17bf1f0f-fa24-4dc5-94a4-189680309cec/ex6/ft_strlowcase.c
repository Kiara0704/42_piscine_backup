/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 00:41:41 by kewang            #+#    #+#             */
/*   Updated: 2026/03/20 00:49:56 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	s1[] = "LOVe\n";
	char	s2[] = "LOve42";
	char	s3[] = "";
	
	printf("%s\n", ft_strlowcase(s1));
	printf("%s\n", ft_strlowcase(s2));
	printf("%s\n", ft_strlowcase(s3));
	return (0);
}*/