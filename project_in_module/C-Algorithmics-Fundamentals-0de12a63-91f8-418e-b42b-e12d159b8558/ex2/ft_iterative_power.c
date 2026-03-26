/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:52:39 by kewang            #+#    #+#             */
/*   Updated: 2026/03/16 20:34:38 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

/*int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 2;
	power = 3;
	result = ft_iterative_power(nb, power);
	printf("%d", result);
	return (0);
}*/
