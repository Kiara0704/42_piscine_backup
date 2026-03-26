/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymendila <ymendila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:45:41 by ymendila          #+#    #+#             */
/*   Updated: 2026/03/25 11:31:24 by ymendila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base);

int		ft_strlen(char *str);

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int (i) = 0;
	int (sign) = 1;
	int (result) = 0;
	int (base_len) = ft_strlen(base);
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (get_index(str[i], base) != -1)
	{
		result = result * base_len + get_index(str[i], base);
		i++;
	}
	return (result * sign);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(n, base_to));
}

/*int	main(void)
{
	char	*result;

	result = ft_convert_base("-101010", "01", "0123456789");
	printf("%s\n", result);
	return (0);
}*/
