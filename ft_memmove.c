/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:39:47 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 13:13:26 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	i = -1;
	while (++i < len)
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
