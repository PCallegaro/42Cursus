/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:09:11 by peantoni          #+#    #+#             */
/*   Updated: 2022/02/22 20:25:15 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size != 0)
	{
		while (dest[i] && i < size)
			i++;
		while (src[j] && (i + j) < size - 1)
		{
			dest[i + j] = src[j];
			j ++;
		}
		if (i < size)
		{
			dest[i + j] = '\0';
		}
	}
	return (i + ft_strlen(src));
}
