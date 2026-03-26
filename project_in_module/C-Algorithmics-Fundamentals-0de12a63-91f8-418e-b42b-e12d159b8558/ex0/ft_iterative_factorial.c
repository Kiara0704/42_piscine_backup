/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 22:12:53 by kewang            #+#    #+#             */
/*   Updated: 2026/03/16 20:35:02 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	c;

	c = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb != 1)
	{
		c = c * nb;
		nb--;
	}
	return (c);
}

/*int	main(void)
{
	int	result;
	int	nb;

	nb = 4;
	result = ft_iterative_factorial(nb);
	printf("%d", result);
	return (0);
}*/
