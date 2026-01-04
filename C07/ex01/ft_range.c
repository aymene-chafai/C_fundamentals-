/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:49:14 by debian            #+#    #+#             */
/*   Updated: 2025/11/16 22:31:41 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ptr, i;

	if (min >= max)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int) + 1);
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}