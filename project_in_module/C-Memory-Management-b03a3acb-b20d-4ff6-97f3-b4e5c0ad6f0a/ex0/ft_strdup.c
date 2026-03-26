/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymendila <ymendila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:27:42 by ymendila          #+#    #+#             */
/*   Updated: 2026/03/25 15:25:58 by ymendila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*nv_src;

	if (!src)
		return (NULL);
	len = 0;
	while (src[len])
		len++;
	nv_src = malloc(sizeof(char) * (len + 1));
	if (!nv_src)
		return (NULL);
	i = 0;
	while (src[i])
	{
		nv_src[i] = src[i];
		i++;
	}
	nv_src[i] = '\0';
	return (nv_src);
}

/*int	main(void)
{
	char *(c) = ft_strdup("KfFWqcajQLEWVxuXbrFZmUAIIR");
	printf("%s", c);
	free(c);
}*/
