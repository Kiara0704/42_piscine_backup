/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:27:26 by kewang            #+#    #+#             */
/*   Updated: 2026/03/16 20:57:56 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int main(void)
{
    int nb;
    int power;

    nb = 5;
    power = 5;
    printf("%d", ft_recursive_power(nb, power));
    return(0);
}*/