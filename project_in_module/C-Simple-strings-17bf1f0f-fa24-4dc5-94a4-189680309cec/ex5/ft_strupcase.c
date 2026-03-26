/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 00:27:21 by kewang            #+#    #+#             */
/*   Updated: 2026/03/20 00:43:25 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
	
	printf("%s\n", ft_strupcase(s1));
	printf("%s\n", ft_strupcase(s2));
	printf("%s\n", ft_strupcase(s3));
	return (0);
}*/