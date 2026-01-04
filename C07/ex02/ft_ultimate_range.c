/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:32:34 by debian            #+#    #+#             */
/*   Updated: 2025/11/18 01:56:27 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *ptr, i;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc((max - min) * sizeof(int) + 1);
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	ptr[i] = '\0';
	*range = ptr;
	return (max - min);
}