#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct			s_fd_list
{
	void					*content;
	int						fd_num;
	struct s_fd_list		*next;
}						t_fd_list;

int						get_next_line(const int fd, char **line);

#endif
