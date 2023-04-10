/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:03:44 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/20 10:08:15 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "aejogitehrguv\nieahi\0ruaeilrhabegilraehincc";
	char	src[] = "truc";

	printf("ft_strncat : %s\n", ft_strcat(dest, src));
	
	char	dest2[100] = "aejogitehrguv\nieahi\0ruaeilrhabegilraehincc";
	char	src2[] = "truc";
	printf("strcat---- : %s\n", strcat(dest2, src2));
}*/
