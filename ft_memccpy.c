/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:45:24 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/07 00:28:10 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst_copy;
	char	*src_copy;

	dst_copy = (char *)dst;
	src_copy = (char *)src;
	while (n--)
		if (*src_copy == (unsigned char)c)
		{
			*dst_copy++ = *src_copy++;
			return ((void *)(dst_copy));
		}
		else
			*dst_copy++ = *src_copy++;
	return (NULL);
}
