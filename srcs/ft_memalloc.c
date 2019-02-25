/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:21:08 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:54:03 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memalloc(size_t size)
{
	char	*array;

	if (!(array = (void *)malloc(size)))
		return (NULL);
	ft_bzero(array, size);
	return (array);
}
