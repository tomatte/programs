#include <includes.h>

static t_list **addresses(void)
{
	static t_list *addrs = NULL;
	return (&addrs);
}

void	track_mem(void *mem)
{
	if (mem == NULL)
		return ;
	t_list **addrs = addresses();
	lst_add_back(addrs, lst_new(mem));
}

void	*talloc(size_t nmemb, size_t size)
{
	void *mem = calloc(nmemb, size);
	track_mem(mem);
	return (mem);
}

void	clear_addrs(void)
{
	t_list	**addrs = addresses();
	lst_clear(addrs);
}
