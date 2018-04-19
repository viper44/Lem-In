/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:56:24 by msemenov          #+#    #+#             */
/*   Updated: 2018/04/18 15:59:07 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <../libft/libft.h>
# include <../printf/printf.h>

typedef struct		s_chain
{
	char			*room;
	int 			num;
	int 			ant;
	struct s_chain	*next;
	struct s_chain	*prev;
}					t_chain;

typedef struct s_lem
{
	int			farm;
	int			start;
	int			finish;
	int 		valid;
	int 		check;
	t_chain		*begin;
	t_chain		*end;
	int 		fd;
}				t_lem;


#endif
