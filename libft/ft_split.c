/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:08:51 by peantoni          #+#    #+#             */
/*   Updated: 2022/03/10 19:48:49 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	wordcount(const char *str, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != c && j == 0)
		{
			j = 1;
			i++;
		}
		if (*str == c)
			j = 0;
		str++;
	}
	return (i);
}

static char	*ft_strcpy1(char *dst, char *src, int i, int j)
{
	int	k;

	k = 0;
	while (j != i)
		dst[k++] = src[i++];
	dst[k] = '\0';
	return (dst);
}


static	char	*ft_strdup1( char *src, int j, int i)
{
	char	*ptr;

	ptr = (char *)malloc((i - j + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strcpy1(ptr, src, j, i);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		x;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c)
			array[x++] = ft_strdup1((char *)s, j, i);
	}
	array[x] = 0;
	return (array);
}

int	main(void)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split("ABC%DFGHIJ%%J%%", '%');
	while (str[i])
		printf("%s\n", str[i++]);
}
