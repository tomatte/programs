#include <includes.h>

void	lst_clear(t_list **lst)
{
	t_list *aux = *lst;
	if (aux == NULL)
		return ;
	
	while (aux)
	{
		t_list *next = aux->next;
		free(aux->content);
		free(aux);
		aux = next;
	}
	*lst = NULL;
}
