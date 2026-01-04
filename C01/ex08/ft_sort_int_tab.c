/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:40:33 by debian            #+#    #+#             */
/*   Updated: 2025/11/09 20:38:18 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i, j, temp;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			temp = tab[i];
			j = i;
			while ((temp < tab[j - 1]) && (j > 0))
			{
				tab[j] = tab[j - 1];
				j--;
			}
			tab[j] = temp;
		}
		i++;
	}
}