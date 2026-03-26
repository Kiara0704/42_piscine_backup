/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:49:07 by kewang            #+#    #+#             */
/*   Updated: 2026/03/24 21:26:15 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	incre;
	int	decre;

	i = 0;
	incre = 1;
	decre = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			incre = 0;
		}
		if (f(tab[i], tab[i + 1]) < 0)
		{
			decre = 0;
		}
		i++;
	}
	return (incre || decre);
}

/*int main (void)
int	tab[] = {1, 2, 3, 4};
int res1 = 
*/
