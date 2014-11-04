/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:45:24 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 21:01:50 by aaggery          ###   ########.fr       */
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
	{
		if (*src_copy == (unsigned char)c)
		{
			*dst_copy++ = *src_copy++;
			return ((void *)(dst_copy + 1));
		}
		else
			*dst_copy++ = *src_copy++;
	}
	return (NULL);
}
