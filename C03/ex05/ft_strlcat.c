/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:25:59 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/21 11:09:04 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		if (to_find[j] == '\0')
			return (str + ++i - j);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    //char  dest[15] = "acc";
    //char  src[] = "truc";

    //printf("ft_strstr : %s\n", _strncat(dest, src, 2));
    
    char    str[40] = "teeghrujvr\ndflzk,bnvdttest";
    char    to_find[] = "gh";
    printf("%s",ft_strls(str, to_find));
}*/
