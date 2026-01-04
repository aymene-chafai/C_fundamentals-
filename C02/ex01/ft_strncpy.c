/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:09:44 by debian            #+#    #+#             */
/*   Updated: 2025/11/13 20:21:37 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int  n)
{
    unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
        dest[i] = src[i];
        i++;
	}
    if (i < n)
    {
        dest[i]= '\0';
    }
	return (dest);
}