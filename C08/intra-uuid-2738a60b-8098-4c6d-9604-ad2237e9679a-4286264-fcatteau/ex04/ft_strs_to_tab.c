/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:54:26 by fcatteau          #+#    #+#             */
/*   Updated: 2022/08/01 13:13:50 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_dup(char *src)
{
	char	*dest;
	int		a;

	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*val;

	val = malloc(sizeof(t_stock_str) * (ac + 1));
	if (val == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		val[i].size = ft_strlen(av[i]);
		val[i].str = av[i];
		val[i].copy = ft_dup(av[i]);
		if (val[i].copy == 0)
			return (0);
		i++;
	}
	val[i].str = 0;
	return (val);
}
/*
int	main(int argc, char **argv)
{
	ft_strs_to_tab(argc, argv);
}
*/
