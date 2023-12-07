#include <includes.h>

int	main(int argc, char *argv[])
{
	printf("lets go!!!\n");
	add_program("test");
	select_option(argc, argv);
	clear_addrs();
	return (0);
}
