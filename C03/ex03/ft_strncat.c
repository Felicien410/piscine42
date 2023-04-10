/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:00:09 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/21 13:18:21 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && nb > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[15] = "\0";
	char	src[] = "\nf";

	printf("ft_strncat : %s\n", ft_strncat(dest, src, 5));
	
	char	dest2[15] = "\0";
	char	src2[] = "\nf";
	printf("strcat : %s\n", strncat(dest2, src2, 5));
}*/
