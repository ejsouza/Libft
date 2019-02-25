/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 11:55:47 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:53:55 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long long		ft_long_atoi(const char *str)
{
	short		flag;
	long long	number;

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
	return (number * flag);
}
