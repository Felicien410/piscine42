/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:06:43 by fcatteau          #+#    #+#             */
/*   Updated: 2022/07/14 18:03:16 by fcatteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int e, int f, int g)
{
	ft_putchar(e + 48);
	ft_putchar(f + 48);
	ft_putchar(g + 48);
	if (!(e == 7 && f == 8 && g == 9))
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb(void)
{
	int	e;
	int	f;
	int	g;

	e = 0;
	f = 1;
	g = 2;
	while (e <= 7)
	{
		f = e + 1;
		while (f <= 8)
		{
			g = f + 1;
			while (g <= 9)
			{
				ft_print(e, f, g);
				g++;
			}
			f++;
		}
		e++;
	}
}
