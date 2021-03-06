/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:06:46 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:57:51 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		if (ft_strcmp((char *)s1, (char *)s2))
			return (0);
	return (1);
}
