/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:39:04 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/24 13:12:06 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb > 2147395600)
		return (0);
	while (i * i != nb)
	{
		if (i * i > nb)
			return (0);
		i++;
	}
	return (i);
}
/*
int	main()
{
	printf("%d",ft_sqrt(9));
	return 0;
}*/
