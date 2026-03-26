/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymendila <ymendila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:32:03 by ymendila          #+#    #+#             */
/*   Updated: 2026/03/25 20:55:43 by ymendila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int (i) = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_taille(int size, char **strs, char *sep)
{
	int (i) = 0;
	int (count) = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += ft_strlen(sep) * (size - 1);
	return (count);
}

char	*ft_fill(char *c, int size, char **strs, char *sep)
{
	int (j) = 0;
	int (i) = 0;
	int (s) = 0;
	int (k) = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			c[s++] = strs[i][j++];
		i++;
		if (i < size)
		{
			k = 0;
			while (sep[k])
				c[s++] = sep[k++];
		}
	}
	c[s] = '\0';
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *(nul) = malloc(1);
	if (size == 0)
	{
		nul[0] = '\0';
		return (nul);
	}
	char *(c) = malloc(sizeof(char) * (ft_taille(size, strs, sep) + 1));
	if (!c)
		return (NULL);
	return (ft_fill(c, size, strs, sep));
}

/*int	main(void)
{
	char	*a = "gmFxyLtnszNyRHSUwRMLx";
	char	*b = "BmFHGfrkeFUrAXhNrsrZGr";
	char	*c = "OApxppYGV";
	char	*d = "poZMHmxFXgYhyfP";
	char	*e = "XKBcYi";
	char	*f = "N";
	char	*g = "RqfgDDQ";
	char	*sep = "sKfiMwPeuYcfiPZxeoUcMYuosVwue";
	char	*strs[] = {a, b, c, d, e, f, g};
	char	*result;

	result = ft_strjoin(6, strs, sep);
	printf("%s", result);
	free(result);
	return (0);
}*/
