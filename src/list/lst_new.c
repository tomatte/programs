#include <includes.h>

t_list *lst_new(void *content)
{
	t_list *node = calloc(1, sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}
