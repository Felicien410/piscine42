/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:44:31 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/19 13:40:24 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	y;

	y = 0;
	while (str[y])
	{
		if (str[y] >= 'a' && str[y] <= 'z')
		{
			str[y] -= 32;
		}
		y++;
	}
	return (str);
}
