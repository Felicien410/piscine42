/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:09:01 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/19 13:39:45 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	y;

	y = 0;
	while (str[y])
	{
		if (!(str[y] >= 'a' && str[y] <= 'z'))
		{
			return (0);
		}
		y++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d",ft_str_is_lowercase("csvbdsvnv"));
	printf("%d",ft_str_is_lowercase("dbhvdiDBJNFDsvnv"));
	printf("%d",ft_str_is_lowercase(""));
}
*/
