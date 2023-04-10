/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:04:31 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/23 14:27:44 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	i = 1;
	y = 0;
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
