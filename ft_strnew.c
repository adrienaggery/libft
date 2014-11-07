/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggery <aaggery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:07:40 by aaggery           #+#    #+#             */
/*   Updated: 2014/11/07 13:20:20 by aaggery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	ft_bzero(s, size + 1);
	return (s);
}
