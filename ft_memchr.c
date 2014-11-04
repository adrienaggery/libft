/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:16:28 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 21:29:32 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_copy;

	s_copy = (char *)s;
	while (n--)
	{
		if (*s_copy == (unsigned char)c)
			return ((void *)s_copy);
		s_copy++;
	}
	return (NULL);
}
