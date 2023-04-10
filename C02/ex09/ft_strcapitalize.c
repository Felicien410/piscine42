/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:13:43 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/19 13:41:25 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha_numeric(char i)
{
	if (!(i >= 'a' && i <= 'z')
		&& !(i >= 'A' && i <= 'Z')
		&& !(i >= '0' && i <= '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
	i++;
	}
	j = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	j = 1;
	while (str[j] != '\0')
	{
		if (!ft_str_is_alpha_numeric(str[j - 1])
			&& (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] -= 32;
		}
		j++;
	}
	return (str);
}
