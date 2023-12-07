#ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <stdlib.h>

typedef struct t_list
{
	void *content;
	struct t_list *next;
}	t_list;

void	add_program(char *name);

//lst
void	lst_add_back(t_list **lst, t_list *node);
t_list *lst_new(void *content);
void	lst_clear(t_list **lst);

//talloc
void	clear_addrs(void);
void	*talloc(size_t nmemb, size_t size);
void	track_mem(void *mem);
void	select_option(int argc, char **argv);

#endif