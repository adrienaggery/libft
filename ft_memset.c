/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:36:27 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/03 14:52:45 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*s;

	s = (char *) b;
	i = 0;
	while(i < len)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
