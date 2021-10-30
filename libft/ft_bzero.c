/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecross <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:09:37 by ecross            #+#    #+#             */
/*   Updated: 2019/10/16 19:34:01 by ecross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t len)
{
	unsigned int	i;
	char			*ch_ptr;

	ch_ptr = ptr;
	i = 0;
	while (i < len)
	{
		ch_ptr[i] = 0;
		i++;
	}
}