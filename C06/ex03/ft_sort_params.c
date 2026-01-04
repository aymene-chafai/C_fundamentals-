/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:43:09 by debian            #+#    #+#             */
/*   Updated: 2025/11/12 22:25:49 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	char	*temp;

	int i, j;
	i = 2;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			temp = argv[i];
			j = i;
			while ((ft_strcmp(temp, argv[j - 1])) && (j > 0))
			{
				argv[j] = argv[j - 1];
				j--;
			}
			argv[j] = temp;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
