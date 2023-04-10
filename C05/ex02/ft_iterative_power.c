/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:00:29 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/24 11:16:35 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb1;

	nb1 = nb;
	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		nb = nb * nb1;
		i++;
	}
	return (nb);
}
/*
int	main()
{
	printf("%d",ft_iterative_power(2,4));
	return 0;
}*/
