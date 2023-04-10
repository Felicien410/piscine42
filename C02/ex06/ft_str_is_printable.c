/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:26:27 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/19 13:40:14 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	y;

	y = 0;
	while (str[y])
	{
		if (!((str[y] >= 32) && (str[y] < 127)))
		{
			return (0);
		}
		y++;
	}
	return (1);
}
