/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:46:21 by debian            #+#    #+#             */
/*   Updated: 2025/11/20 20:02:18 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	{
	}
	return (--i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int			i;

	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr->size = ft_strlen(av[i]);
		ptr->str = av[i];
		ptr->copy = ft_strdup(av[i]);
		i++;
	}
	ptr->size = 0;
	ptr->str = 0;
	ptr->copy = 0;
	return (ptr);
}
