/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:17:27 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 15:00:20 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*array;

	if (s)
	{
		i = 0;
		if (!(array = (char *)malloc(sizeof(*array) * (len + 1))))
			return (NULL);
		while (len)
		{
			array[i] = s[start];
			i++;
			start++;
			len--;
		}
		array[i] = '\0';
		return (array);
	}
	return (NULL);
}
