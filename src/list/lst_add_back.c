#include <includes.h>

void	lst_add_back(t_list **lst, t_list *node)
{
	if (*lst == NULL)
	{
		*lst = node;
		return ;
	}
	t_list *aux = *lst;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
}
