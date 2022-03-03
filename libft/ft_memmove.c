/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:12:15 by peantoni          #+#    #+#             */
/*   Updated: 2022/03/03 22:01:43 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			(((char *)dst)[len] = ((char *)src)[len]);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
