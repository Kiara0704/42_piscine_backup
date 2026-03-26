/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 21:57:12 by kewang            #+#    #+#             */
/*   Updated: 2026/03/14 21:57:25 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(int i, char c, char *tab, int n)
{
	if (i == n)
	{
		write(1, tab, n);
		if (tab[0] != (10 - n) + '0')
			write(1, ", ", 2);
		return ;
	}
	while (c <= '9')
	{
		tab[i] = c;
		ft_comb(i + 1, c + 1, tab, n);
		c++;
	}
}

void	ft_print_combn(int n)
{
	char	tab[9];	

	if (n < 10 && n > 0)
	{
		ft_comb(0, '0', tab, n);
	}
}

/*int	main(void)
{
	ft_print_combn(3);
	return (0);
}*/
