/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:02:44 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/23 14:30:50 by fcatteau         ###   ########.fr       */
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
	int	lenght;

	i = 1;
	y = 0;
	lenght = argc - 1;
	while (i < argc)
	{
		while (argv[lenght][y])
		{
			ft (argv[lenght][y]);
			y++;
		}
		y = 0;
		ft('\n');
		i++;
		lenght --;
	}
	return (0);
}
