/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:29:17 by msemenov          #+#    #+#             */
/*   Updated: 2017/11/14 16:12:30 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int		ft_atoi_p(const char *s1)
{
	int i;
	int m;
	int a;

	a = 0;
	m = 0;
	i = 0;
	while (s1[i] == '\t' || s1[i] == '\v' || s1[i] == '\f'
		|| s1[i] == '\r' || s1[i] == '\n' || s1[i] == ' ')
		i++;
	if (s1[i] == '-')
		m++;
	if (s1[i] == '+' || s1[i] == '-')
		i++;
	while (s1[i] >= '0' && s1[i] <= '9')
		a = a * 10 + (s1[i++] - 48);
	if (m == 1)
		return (-a);
	else
		return (a);
}