/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymendila <ymendila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:45:32 by ymendila          #+#    #+#             */
/*   Updated: 2026/03/25 11:12:42 by ymendila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int (i) = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_digits(int nbr, int base_len)
{
	int (count) = 0;
	if (nbr <= 0)
		count = 1;
	while (nbr)
	{
		nbr = nbr / base_len;
		count++;
	}
	return (count);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	*result;
	long	n;
	int		base_len;
	int		size;

	base_len = ft_strlen(base);
	size = count_digits(nbr, base_len);
	n = nbr;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (size-- > 0)
	{
		if (result[size] == '-')
			continue ;
		result[size] = base[n % base_len];
		n = n / base_len;
	}
	return (result);
}
