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

	lst_clear(&test);
	if (test == NULL)
		printf("it's null!!!\n");
	return (0);
}
