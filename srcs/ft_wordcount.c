/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:23:50 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 15:01:01 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_wordcount(char *s, char c)
{
	int				i;
	int				words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (words);
}
