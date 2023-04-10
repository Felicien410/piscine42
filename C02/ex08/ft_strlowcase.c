/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:54:10 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/19 13:40:38 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	y;

	y = 0;
	while (str[y])
	{
		if (str[y] >= 'A' && str[y] <= 'Z')
		{
			str[y] += 32;
		}
		y++;
	}
	return (str);
}
/*
int	main(void)
{
	char ph[]= "GVVBILVBDSVV";
	ft_strlowcase(ph);
	return 0;
}*/
