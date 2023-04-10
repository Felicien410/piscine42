/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:22:46 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/19 13:40:02 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	y;

	y = 0;
	while (str[y])
	{
		if (!((str[y] >= 'A') && (str[y] <= 'Z')))
		{
			return (0);
		}
		y++;
	}
	return (1);
}
