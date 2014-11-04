/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:16:28 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 13:39:21 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*s_copy;

	i = -1;
	s_copy = (char *)s;
	while (++i < n)
		if (s_copy[i] == (unsigned char)c)
			return ((void *)&s_copy[i]);
	return (NULL);
}
