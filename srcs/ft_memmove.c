/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:52:59 by esouza            #+#    #+#             */
/*   Updated: 2019/02/25 13:08:53 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dst_cpy;
	unsigned char			*src_cpy;

	src_cpy = (unsigned char *)src;
	dst_cpy = (unsigned char *)dst;
	if (src_cpy < dst_cpy)
		while (len--)
			dst_cpy[len] = src_cpy[len];
	else
		ft_memcpy(dst_cpy, src_cpy, len);
	return (dst_cpy);
}
