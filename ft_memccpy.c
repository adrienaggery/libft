/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:45:24 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 17:04:17 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*dst_copy;
	char			*src_copy;

	i = 0;
	dst_copy = (char *)dst;
	src_copy = (char *)src;
	while (i < n)
	{
		dst_copy[i] = src_copy[i];
		if (src_copy[i] == (unsigned char)c)
			return ((void *)&dst_copy[i + 1]);
		i++;
	}
	return (NULL);
}
