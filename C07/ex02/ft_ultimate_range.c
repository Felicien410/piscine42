/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:52:37 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/25 11:41:57 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	a;

	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	a = 0;
	if (min < -2147483648 || max > 2147483647 || size > 2147483647)
		return (-1);
	*range = malloc(sizeof(int) * (size));
	while ((min + a) < max)
	{
		(*range)[a] = min + a;
		a++;
	}
	return (size);
}
/*
int main()
{
	int *range;

}
*/
