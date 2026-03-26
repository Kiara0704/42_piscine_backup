/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 23:21:30 by kewang            #+#    #+#             */
/*   Updated: 2026/03/17 23:21:34 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int i;
	int size;
	int tab[5] = {3, 7, 5, 0, 9};
	
	i = 0;
	size = 5;
	ft_sort_int_tab(tab, 5);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/