/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esouza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:56:34 by esouza            #+#    #+#             */
/*   Updated: 2019/02/20 14:57:44 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strdup(const char *s1)
{
	char	*array;

	if (!(array = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	ft_strcpy(array, s1);
	return (array);
}
