/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:57:44 by msemenov          #+#    #+#             */
/*   Updated: 2017/11/07 14:35:29 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

char		*ft_strjoin_p(char const *s1, char const *s2)
{
	char	*s_new;
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s_new = malloc(sizeof(char) * (ft_strlen_p(s1) + ft_strlen_p(s2) + 1));
	if (s_new == NULL)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			s_new[i] = s1[i];
			i++;
		}
		while (s2[n] != '\0')
			s_new[i++] = s2[n++];
		s_new[i] = '\0';
	}
	return (s_new);
}
