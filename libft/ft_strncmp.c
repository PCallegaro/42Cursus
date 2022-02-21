/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:32:53 by peantoni          #+#    #+#             */
/*   Updated: 2022/02/18 19:36:08 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Se encontrarmos diferenca de caracteres ou nossa variavel 
*i ficar do mesmo tamanho que n -1 ou chegarmos ao final de s1,
*terminamos o loop*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t (i);
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
