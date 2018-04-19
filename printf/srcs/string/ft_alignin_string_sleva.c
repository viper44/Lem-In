/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aligning_string_sleva.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 16:43:24 by msemenov          #+#    #+#             */
/*   Updated: 2018/02/01 16:43:25 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

static	char	*ft_string_width(char *string, t_data *data)
{
	char	*tmp;
	int		i;

	tmp = NULL;
	i = 0;
	tmp = ft_strnew_p((data->width) - (int)ft_strlen_p(string));
	while (i < (data->width - (int)ft_strlen_p(string)))
	{
		tmp[i] = ' ';
		i++;
	}
	string = ft_strjoin_p(string, tmp);
	free(tmp);
	return (string);
}

static	char	*ft_string_precision(char *string, t_data *data)
{
	char *output;

	output = ft_strsub_p(string, 0, data->precision);
	return (output);
}

void			ft_aligning_string_sleva(char *string, t_data *data)
{
	if (data->dot == 1)
		string = ft_string_precision(string, data);
	if ((size_t)data->width > ft_strlen_p(string))
		string = ft_string_width(string, data);
	data->ret = ft_strlen_p(string);
	write(1, string, data->ret);
}
