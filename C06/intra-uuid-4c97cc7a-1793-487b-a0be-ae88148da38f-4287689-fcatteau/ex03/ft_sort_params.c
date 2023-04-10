/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:51:03 by fcatteau          #+#    #+#             */
/*   Updated: 2022/08/01 17:43:11 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

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
	if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else if (s2[i] == '\0')
	{
		return (s1[i]);
	}
	return (0);
}

void	ft(char c)
{
	write (1, &c, 1);
}

void	rev(int argc, char **argv)
{
	int		i;
	int		y;
	char	*swap[100];

	i = 1;
	while (i < argc - 1)
	{
		y = 1;
		while (argv [y +1])
		{
			if (ft_strcmp(argv[y], argv[y +1]) > 0)
			{
				*swap = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = *swap;
			}
		y++;
		}
	i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	i = 1;
	y = 0;
	rev(argc, argv);
	while (i < argc)
	{
		while (argv[i][y])
		{
			ft(argv[i][y]);
			y++;
		}
		y = 0;
		ft ('\n');
		i++;
	}
	return (0);
}
