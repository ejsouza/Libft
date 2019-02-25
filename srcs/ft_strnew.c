/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:32:44 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:59:42 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strnew(size_t size)
{
	char	*array;

	if (!(array = (char *)malloc(sizeof(*array) * (size + 1))))
		return (NULL);
	ft_memset(array, 0, size);
	array[size] = '\0';
	return (array);
}
