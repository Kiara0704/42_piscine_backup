/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:36:10 by kewang            #+#    #+#             */
/*   Updated: 2026/03/23 23:37:44 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*int	f(int nb)
{
	nb = nb + 1;
	return (nb);
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*newtab;
	int	i;

	i = 0;
	newtab = (int *) malloc (sizeof (int) * length);
	if (!newtab)
	{
		return (NULL);
	}
	while (i < length)
	{
		newtab[i] = f(tab[i]);
		i++;
	}
	return (newtab);
}

/*int	main(void)
{
	int i;
	int	*result;
	int	tab[5] = {134, 2345, 4624, 2345, 245};

	i = 0;
	result = ft_map(tab, 5, &f);
	while (i < 5)
	{
	printf("%d\n", result[i]);
	i++;
	}
	return (0);
}*/