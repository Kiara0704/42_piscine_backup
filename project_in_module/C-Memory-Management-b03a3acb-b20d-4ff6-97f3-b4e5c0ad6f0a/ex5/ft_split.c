/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymendila <ymendila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:33:25 by ymendila          #+#    #+#             */
/*   Updated: 2026/03/25 11:10:55 by ymendila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sep(char str, char *charset)
{
	int (i) = 0;
	while (charset[i])
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int	ft_nb_mot(char *str, char *charset)
{
	int (i) = 0;
	int (nb) = 0;
	int (s) = 0;
	while (str[i])
	{
		if (!(ft_sep(str[i], charset)) && s == 0)
		{
			s = 1;
			nb++;
		}
		else if (ft_sep(str[i], charset))
			s = 0;
		i++;
	}
	return (nb);
}

char	**ft_malloc(char *str, char *charset)
{
	int		i;
	int		nb_mot;
	int		len;
	char	**tab;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	nb_mot = ft_nb_mot(str, charset);
	tab = malloc(sizeof(char *) * (nb_mot + 1));
	if (!tab)
		return (NULL);
	while (i < nb_mot)
	{
		tab[i] = malloc(sizeof(char) * (len + 1));
		if (!tab[i])
			return (NULL);
		i++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int (i) = 0;
	int (j) = 0;
	int (chaine) = 0;
	char **(tab) = ft_malloc(str, charset);
	while (str[chaine])
	{
		while (ft_sep(str[chaine], charset))
			chaine++;
		j = 0;
		if (str[chaine])
		{
			while (str[chaine] && !ft_sep(str[chaine], charset))
				tab[i][j++] = str[chaine++];
			tab[i][j] = '\0';
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

/*int	main(void)
{
	char *(charset) = "./ ,	";
	char *(str) = " Hello	world  tyk! / .. tjttjg";
	char **(words) = ft_split(str, charset);
	int (i) = 0;
	if (words)
	{
		while (words[i])
		{
			printf("%s\n", words[i]);
			free(words[i++]);
		}
		free(words);
	}
	else
		printf("Erreur\n");
	return (0);
}*/
