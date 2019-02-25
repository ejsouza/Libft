/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:41:44 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:56:05 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void			ft_putnbr(int n)
{
	int			flag;
	long int	nb;

	flag = 1;
	nb = n;
	if (nb < 0)
	{
		flag = -1;
		nb *= flag;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}
