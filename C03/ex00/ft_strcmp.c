/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:11:34 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/20 09:56:19 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
			i ++;
	}
	return 0;
}

int	main()
{
	char s1[] = "aaaaaav";
	char s2[] = "aaaaaab";
	printf("%d\n", ft_strcmp(s1,s2));
	printf("%d\n",strcmp(s1,s2));

}
