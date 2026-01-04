/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 20:03:47 by debian            #+#    #+#             */
/*   Updated: 2025/11/21 10:55:44 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

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
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0 && par[i].str != 0 && par[i].copy != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
