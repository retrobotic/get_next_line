/*
** get_next_line.h for get_next_line in /home/champi_t/rendu/get_next_line
** 
** Made by theo champion
** Login   <champi_t@epitech.net>
** 
** Started on  Fri Dec 25 17:59:47 2015 theo champion
** Last update Sun Jan 17 16:21:50 2016 theo champion
*/

#include <stdlib.h>

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_
#endif /* !GET_NEXT_LINE_H_ */

#ifndef READ_SIZE
# define READ_SIZE (14)
#endif /* !READ_SIZE */

typedef struct	s_control
{
  int		stop;
  int		*ptr_stop;
  int		readed;
}		t_control;

char	*get_next_line(const int);
char	*offset_check(char *, char *);
int	my_strlen(char *);
int	read_to_linebuf(char *, char **, char *, t_control *);
void	linebuf_to_offset(char *, char *, t_control *, int);
