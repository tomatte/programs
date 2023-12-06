#include <includes.h>

t_list *lst_new(void *content)
{
	if (content == NULL)
		return ;
	t_list *node = calloc(1, sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}
