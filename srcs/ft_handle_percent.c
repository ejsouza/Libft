/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 10:26:19 by esouza            #+#    #+#             */
/*   Updated: 2019/02/25 09:54:53 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_verify_percent(const char *restrict format, t_ptf *p)
{
	int	i;

	i = (*p).at;
	while (ft_isalpha(format[(*p).at] == 0))
		(*p).at++;
	ft_verify_type(format, p);
	(*p).at -= i;
	if ((*p).flag == 0)
	{
		if (format[(*p).at + 1] == '-')
			return (1);
		else if (format[(*p).at + 1] >= '0' && format[(*p).at + 1] <= '9')
			return (1);
	}
	return (0);
}
