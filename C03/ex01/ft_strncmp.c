/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:55:52 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/21 15:56:29 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] == s1[i] && s2[i] && n > 0)
	{
		i ++;
		n --;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "f/\n0\0";
	char s2[] = "\n";
	printf("%d\n",ft_strncmp(s1,s2,0));
	printf("%d",strncmp(s1,s2,0));
	return(0);
}*/
