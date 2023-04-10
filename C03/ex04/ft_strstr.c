 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:15:52 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/21 13:18:38 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
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
			return (str + i+1 - j);
		i++;
	}
	return (0);
}

int main(void)
{
    char  str1[15] = "in\n/00\0";
    char  to_find1[] = "n";

    printf("%s\n",strstr (str1, to_find1));
    
    char    str[40] = "in\n/00\0";
    char    to_find[] = "n";
    printf("%s",ft_strstr(str, to_find));
}
