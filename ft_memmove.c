/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:39:47 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 17:16:28 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*dst_copy;
	char			*src_copy;

	dst_copy = (char *)dst;
	src_copy = (char *)src;
	i = 0;
	while (i < len)
	{
		dst_copy[i] = src_copy[i];
		i++;
	}
	return (dst);
}
