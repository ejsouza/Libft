/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:41:47 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 15:00:42 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = (c - 'A') + 'a';
		return (c);
	}
	return (c);
}
