/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 22:08:43 by debian            #+#    #+#             */
/*   Updated: 2025/11/19 08:05:13 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN(x) (!(x % 2))
# define EVEN_MSG "I have an even number of arguments"
# define ODD_MSG "I have an odd number of arguments"

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
#endif