#ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	add_program(char *name);

typedef struct t_list
{
	void *content;
	t_list *next;
}	t_list;

#endif