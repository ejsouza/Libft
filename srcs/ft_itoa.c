/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 12:09:17 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 15:30:06 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char				*ft_itoa(int n)
{
	char			*array;
	size_t			len;
	long long int	nb;

	len = ft_int_len(n);
	nb = n;
	if (!(array = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nb == 0)
		array[0] = '0';
	else if (nb < 0)
	{
		array[0] = '-';
		nb *= -1;
	}
	array[len] = '\0';
	while (nb)
	{
		len--;
		array[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (array);
}
