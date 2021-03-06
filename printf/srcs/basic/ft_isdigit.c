/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:20:49 by msemenov          #+#    #+#             */
/*   Updated: 2017/10/31 17:06:45 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	ft_isdigit_p(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
