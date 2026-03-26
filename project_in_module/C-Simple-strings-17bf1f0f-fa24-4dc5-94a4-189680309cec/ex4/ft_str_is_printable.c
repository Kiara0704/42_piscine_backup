/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_ptintable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:36:38 by kewang            #+#    #+#             */
/*   Updated: 2026/03/22 02:28:38 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*s1 = "LOVe\n";
	char	*s2 = "LOve42";
	char	*s3 = "";
	
	printf("%d\n", ft_str_is_ptintable(s1));
	printf("%d\n", ft_str_is_ptintable(s2));
	printf("%d\n", ft_str_is_ptintable(s3));
	return (0);
}*/