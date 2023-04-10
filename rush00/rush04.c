/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:29:57 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/20 12:14:02 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_string(int x)
{
	int	i;

	ft_putchar('A');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (i == x - 2)
	{
		ft_putchar('C');
	}
}

void	middle_string(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y - 2)
	{
		ft_putchar('B');
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (i == x - 2)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j++;
	}
}

void	last_string(int x)
{
	int	i;

	ft_putchar('C');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (i == x - 2)
	{
		ft_putchar('A');
	}
}
void	rush(int x, int y)
{
	if (y == 1)
	{
		first_string(x);
		ft_putchar('\n');
	}
	if (y == 2)
	{
		first_string(x);
		ft_putchar('\n');
		last_string(x);
		ft_putchar('\n');
	}
	if (y > 2)
	{
		first_string(x);
		ft_putchar('\n');
		middle_string(x, y);
		last_string(x);
		ft_putchar('\n');
	}
}
int	main(void)
{
	rush(5, 4);
	ft_putchar('\n');

	return (0);
}
