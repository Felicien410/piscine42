/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:09:49 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/24 12:12:43 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	res;

	a = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (a <= nb)
	{
		res = res * a;
		a ++;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-4));
	return 0;
}*/
