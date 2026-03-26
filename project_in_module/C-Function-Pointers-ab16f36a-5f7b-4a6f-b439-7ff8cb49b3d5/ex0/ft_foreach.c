/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:08:06 by kewang            #+#    #+#             */
/*   Updated: 2026/03/23 20:24:51 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	ft_plus_one(int nb)
{
	printf("%d\n", nb + 1);
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int main(void)
{
    int tab[] = {1, 3, 6, 9000, 234555};
	ft_foreach(tab, 5, &ft_plus_one);
    return (0);
}*/