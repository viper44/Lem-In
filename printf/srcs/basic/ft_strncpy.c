/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 13:38:20 by msemenov          #+#    #+#             */
/*   Updated: 2017/11/01 13:12:50 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

char		*ft_strncpy_p(char *dst, const char *src, size_t length)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && length > 0)
	{
		dst[i] = src[i];
		i++;
		length--;
	}
	while (length--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
