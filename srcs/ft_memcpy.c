/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:27:27 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:54:38 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	i = 0;
	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	while (n)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
		n--;
	}
	dst = dst_cpy;
	return ((unsigned char *)dst);
}
