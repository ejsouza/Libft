/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:34:49 by esouza            #+#    #+#             */
/*   Updated: 2017/11/30 23:36:37 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordlen(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}