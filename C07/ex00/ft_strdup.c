/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:12:49 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/25 11:42:57 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include<stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		lenght;
	char	*tab;

	lenght = len(src);
	i = 0;
	tab = malloc(lenght * sizeof(char));
	if (tab == 0)
	{
		return (0);
	}
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int	main()
{
	char s1[] = "abru)0ghi\nfg";
	printf("%s\n", ft_strdup(s1));
	printf("%s\n",strdup(s1));
}*/
