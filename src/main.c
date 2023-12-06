#include <includes.h>

int	main(int argc, char *argv[])
{
	printf("lets go!!!\n");
	add_program("test");

	t_list *test = NULL;
	lst_add_back(&test, lst_new(strdup("hey world")));
	printf("result: %s\n", (char *) test->content);

	lst_add_back(&test, lst_new(strdup("acho q ta na hora")));
	printf("result: %s\n", (char *) test->next->content);
	return (0);
}
