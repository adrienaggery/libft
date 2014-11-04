/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:15:33 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 20:03:50 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_copy;
	char	*src_copy;

	dst_copy = (char *)dst;
	src_copy = (char *)src;
	while (n--)
		*dst_copy++ = *src_copy++;
	return (dst);
}
