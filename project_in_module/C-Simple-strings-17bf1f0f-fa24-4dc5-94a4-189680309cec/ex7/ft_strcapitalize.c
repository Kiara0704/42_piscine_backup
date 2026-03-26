/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 02:23:19 by kewang            #+#    #+#             */
/*   Updated: 2026/03/22 02:23:25 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 97 && str[i] <= 122)))
		{
			if ((i == 0) || (!((str[i - 1] >= 97 && str[i - 1] <= 122)
						|| (str[i - 1] >= 65 && str[i - 1] <= 90)
						|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
				str[i] = (str[i]) - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	s1[] = "hello, how are you doing? 42words forty-two; fifty+and+one";
	char	s2[] = "LOve42";
	char	s3[] = "";
	
	printf("%s\n", ft_strcapitalize(s1));
	printf("%s\n", ft_strcapitalize(s2));
	printf("%s\n", ft_strcapitalize(s3));
	return (0);
}*/
