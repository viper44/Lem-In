/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:39:58 by msemenov          #+#    #+#             */
/*   Updated: 2017/11/15 12:48:56 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

size_t		ft_strlen_p(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
