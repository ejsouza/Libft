/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:03:00 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:53:42 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static long long			ft_calculatesize(long long int n)
{
	int			i;

	i = 0;
	if (n <= 0)
		i = (i < 0) ? 2 : 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char						*ft_itoa_base(long long n, char *base)
{
	char		*array;
	int			len;
	int			base_len;

	len = ft_calculatesize(n);
	base_len = ft_strlen(base);
	if (!(array = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == 0)
		array[0] = '0';
	else if (n < 0)
	{
		array[0] = '-';
		n *= -1;
	}
	array[len] = '\0';
	while (n)
	{
		len--;
		array[len] = base[n % base_len];
		n /= base_len;
	}
	return (array);
}
