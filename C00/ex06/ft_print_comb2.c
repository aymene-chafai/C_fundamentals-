/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 23:21:34 by debian            #+#    #+#             */
/*   Updated: 2025/11/07 21:42:03 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	res;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		res = '0';
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		if ((nb / 10) > 0)
			ft_putnbr(nb / 10);
		res += (nb % 10);
		write(1, &res, 1);
	}
}

void	ft_print_comb2(void)
{
	int i, j;
	i = 0;
	while (i < 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < 10)
				write(1, "0", 1);
			ft_putnbr(i);
			write(1, " ", 1);
			if (j < 10)
				write(1, "0", 1);
			ft_putnbr(j);
			write(1, ",", 1);
			write(1, " ", 1);
			j++;
		}
		i++;
	}
	write(1, "98 99", 5);
}