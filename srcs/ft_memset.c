/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:20:17 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:55:06 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	ch;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)b;
	ch = c;
	while (len)
	{
		str[i] = ch;
		i++;
		len--;
	}
	b = str;
	return (b);
}
