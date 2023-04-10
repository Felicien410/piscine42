/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:13:55 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/21 11:25:29 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	alph(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	numi(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	result(int expo, int i, char *str)
{
	int	res;

	res = 0;
	if (expo == 1)
		res = (str[i - expo] - 48);
	while (numi(str[i - expo]))
	{	
		res = res * 10 + (str[i - expo] - 48);
		i++;
	}
	return (res);
}	

int	ft_atoi(char *str)
{
	int	i;
	int	stockminus;
	int	expo;
	int	res;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	stockminus = 1;
	expo = 0;
	while ((!alph(str[i])) && (!numi(str[i])))
	{
		if (str[i] == 45)
			stockminus = stockminus * (-1);
		else if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (0);
		else if (numi(str[i]))
				expo += 1;
	i++;
	}
	res = result(expo, i, str);
	return (res * stockminus);
}
/*
int	main(void)
{
	printf("%d\n",ft_atoi("     ---+54g54"));
    return(0);
}*/
