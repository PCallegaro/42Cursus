/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:42:22 by peantoni          #+#    #+#             */
/*   Updated: 2022/03/03 22:02:23 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	len = ft_strlen(s1) - 1 ;
	while (s1[len] && ft_strchr(set, s1[len]) && len > i)
		len --;
	str = ft_substr(s1, i, (len - i) + 1);
	return (str);
}
