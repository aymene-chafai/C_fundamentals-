/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 03:46:07 by debian            #+#    #+#             */
/*   Updated: 2025/11/11 22:24:50 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(char *str)
{
	int i, j, s, nbr;
	s = 0;
	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	s %= 2;
	while (i >= 0)
	{
		j = 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr += ((str[i] - '0') * j);
			j *= 10;
			i--;
		}
		i--;
	}
	if (!s)
		return (nbr);
	else
		return (-nbr);
}

// int	main(int argc, char const *argv[])
// {
// 	printf("%d", atoi("   --+-123abc654"));
// 	return (0);
// }
