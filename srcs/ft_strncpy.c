/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:45:01 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:59:27 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char				*ft_strncpy(char *dst, const char *src, size_t len)
{
	int				i;

	i = 0;
	while ((len > 0) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len)
	{
		dst[i] = '\0';
		len--;
		i++;
	}
	return (dst);
}
