/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 11:52:56 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:49:36 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	short	flag;
	long	number;

	flag = 1;
	number = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		flag = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return ((int)number * flag);
}
