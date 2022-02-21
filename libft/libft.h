/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:04:30 by peantoni          #+#    #+#             */
/*   Updated: 2022/02/21 22:08:22 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int	ft_isalnum(int c);
int	ft_ft_isalpha(void);
int	ft_isascii(int c);
int	ft_isdigit(int k);
int	ft_isprint(int arg);
int	ft_strlen(char *c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
char	*strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif