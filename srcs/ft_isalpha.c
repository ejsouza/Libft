/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:58:12 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:52:37 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_isalpha(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else if ((c > 96) && (c < 123))
		return (1);
	return (0);
}
