/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:39:11 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/04 15:15:28 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	unsigned char		*s1_copy;
	unsigned char		*s2_copy;

	i = 0;
	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	while (s1_copy[i] == s2_copy[i] && i < n)
		i++;
	return (s1_copy[i] - s2_copy[i]);
}
