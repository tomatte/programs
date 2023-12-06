#ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

typedef struct t_list
{
	void *content;
	struct t_list *next;
}	t_list;

void	add_program(char *name);

//lst
void	lst_add_back(t_list **lst, t_list *node);
t_list *lst_new(void *content);



#endif