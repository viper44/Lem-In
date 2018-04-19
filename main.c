#include <stdio.h>
#include "../src/lem-in.h"
#include "libft.h"
#include "printf.h"

t_chain	*ft_create_node(char *room, int num)
{
	t_chain *new;

	new = (t_chain*)malloc(sizeof(t_chain));
	new->room = room;
	new->ant = 0;
	new->num = num;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	ft_check_room(char *tmp, t_lem *data)
{
	//if (ft_atoi())
}

void	ft_check_start_end(char *line, t_lem *data)
{
	int i;

	i = 0;
	while (line[i] != 'L' && line[i] != '-')
		i++;
	if (data->start == 1)
	{
		data->begin = ft_create_node(ft_strsub(line, 0, i), 0);
		data->start = 0;
	}
	else if (data->finish == 1)
	{
		data->end = 0;
		data->end = ft_create_node(ft_strsub(line, 0, i), 9999);

	}
}

void	ft_check_comment_lvl2(t_lem *data)
{
	char *line;

	get_next_line(data->fd, &line);
	if (line[0] == '#')
	{
		ft_strdel(&line);
		ft_check_comment_lvl2(data);
		return ;
	}
	ft_check_start_end(line, data);
}


int	ft_check_comment(char *line, t_lem *data)
{
	int i;

	i = 0;
	while (line[i] == '#')
		i++;
	if (ft_strcmp("start", &line[i]) == 0 && i == 2)
	{
		data->start = 1;
		ft_check_comment_lvl2(data);
	}
	else if (ft_strcmp("end", &line[i]) == 0 && i == 2)
	{
		data->finish = 1;
		ft_check_comment_lvl2(data);
	}
	else
		return (1);
	return (1);
}


int ft_valid(t_lem *data)
{
	char *line;


	while (get_next_line(data->fd, &line))
	{
		if (line[0] == '#') {
			if (ft_check_comment(line, data))
				continue;
		}
	}
}

int main(int argc, char **argv) {
	int fd;
	t_lem *data;

	data = ft_memalloc(sizeof(data));
	data->valid = 1;
	if (argc == 2) {
		data->fd = open(argv[1], O_RDONLY);
		if (data->fd == -1)
		{
			ft_printf("Error");
			return (0);
		}
	}
	else
		data->fd = 0;
	if (ft_valid(data))
		{

		}
	else
			ft_printf("Error");
    return 0;
}