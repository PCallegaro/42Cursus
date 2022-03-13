/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:14:10 by peantoni          #+#    #+#             */
/*   Updated: 2022/03/13 21:50:44 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*(char *)str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*(char *)str == (char)c)
		return ((char *)str);
	return (0);
}
