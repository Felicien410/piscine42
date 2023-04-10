/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:05:37 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/25 11:42:19 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	space;

	i = 0;
	space = max - min;
	tab = malloc((max - min) * sizeof(int));
	if (min > max)
		return (NULL);
	if ((min - max) == 0)
		return (0);
	if (tab == 0)
	{
		return (0);
	}
	while (i < space)
	{
		tab[i] = min;
		min ++;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int i;
	int *test = ft_range(-10, 10);
	
	i = 0;
	while (i < 20)
	{
		printf("%d\n", test[i]);
		i++;
	}
	return (0);
}*/
