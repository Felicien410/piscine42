/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:27:18 by fcatteau          #+#    #+#             */
/*   Updated: 2022/08/04 19:13:57 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h> 
#include<unistd.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	nb_split(char *str, char *charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (is_charset(str[i], charset) && str[i])
			i++;
		while (!is_charset(str[i], charset) && str[i])
			i++;
		counter += 1;
	}
	if (is_charset(str[i - 1], charset))
		counter -= 1;
	return (counter);
}

int	len_word(char *str, int start, char *charset)
{
	while (str[start] && !is_charset(str[start], charset))
	{
		start++;
	}
	return (start);
}

void	copy(char *tab, char *str, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		tab[i] = str[start];
		start++;
		i++;
	}
	tab[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		start;
	int		end;

	tab = malloc(sizeof(char *) * (nb_split(str, charset) + 1));
	i = 0;
	start = 0;
	while (i < nb_split(str, charset))
	{
		while (str[start] && is_charset(str[start], charset))
			start++;
		end = len_word(str, start, charset);
		tab[i] = malloc(sizeof(char) * (end - start + 1));
		copy(tab[i], str, start, end);
		start = end;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
/*
int main()
{
	char *str = "dcidsjybvh";
	char *charset = "yyyy";
	int i =0;
	while (i < nb_split(str,charset))
	{
		printf("%s\n",ft_split(str,charset)[i]);
		i++;
	}
	return 0;
}*/
