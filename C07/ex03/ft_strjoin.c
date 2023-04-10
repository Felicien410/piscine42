/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:07:43 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/25 18:19:10 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <string.h>
#include <stdio.h>

int	len(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

int	t(char **str, int size)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += len(str[i]);
		i++;
	}
	return (lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		y;
	char	*tab;
	int		z;

	i = 0;
	y = 0;
	z = 0;
	tab = malloc((t(strs, size) + ((size - 1) * len(sep)) * sizeof(char)));
	if (size == 0)
		tab = malloc(sizeof(char));
	while (i < size)
	{
		while (strs[i][y])
			tab[z++] = strs[i][y++];
		y = 0;
		while (sep[y] && i != size - 1)
			tab[z++] = sep[y++];
		i++;
		y = 0;
	}
	tab[z] = '\0';
	return (tab);
}

int	main()
{
	char *options[4] = {"pwik", "lol", "1234", "  d"};
	char * c = "1234";
	printf("%s\n",ft_strjoin(4, options,c));
	return 0;
}
