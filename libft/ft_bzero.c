/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peantoni <peantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:00:17 by peantoni          #+#    #+#             */
/*   Updated: 2022/03/13 21:49:25 by peantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*De acordo com o man essa funcao escreve n zero bytes para esta string
se n eh zero, essa funcao ft_bzero nao faz nada. Peguei a funcao anterior
para realizar esta, pois ele faz a funcao de preencher qualquer string do
tamanho n com 0 s.*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
