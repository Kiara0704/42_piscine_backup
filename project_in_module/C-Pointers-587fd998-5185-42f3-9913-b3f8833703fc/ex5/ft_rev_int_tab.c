/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 21:33:38 by kewang            #+#    #+#             */
/*   Updated: 2026/03/18 19:23:45 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*int	main(void)
{
	int	 i;
	int	size;
	int	tab[5] = {5, 2, 3, 4, 1};

	ft_rev_int_tab(tab, 5);
	i = 0;
	size = 5;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/