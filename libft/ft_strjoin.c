/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:57:44 by msemenov          #+#    #+#             */
/*   Updated: 2018/02/05 15:48:04 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin2(char *s1, char *s2, int del)
{
	char	*s_new;
	size_t	i;
	size_t	n;

	n = 0;
	i = -1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s_new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	while (s1[++i] != '\0')
		s_new[i] = s1[i];
	while (s2[n] != '\0')
		s_new[i++] = s2[n++];
	if (del == 1)
		ft_strdel(&(s1));
	else if (del == 2)
		ft_strdel(&s2);
	else if (del == 3)
	{
		ft_strdel(&s1);
		ft_strdel(&s2);
	}
	return (s_new);
}
