#include <includes.h>

static void	show_options(int argc, char **argv)
{
	if (argc != 1 && argc != 2)
		return ;
	if (argc == 2 && strcmp(argv[1], "help") != 0)
		return ;

	printf("DESCRIPTION\n");
	printf("\tThis is a program dedicated to keep track of other programs\n\n");
	printf("\tadd {program-path}\n");
	printf("\t\tadd a new program to the database\n\n");
	printf("\tlist \n");
	printf("\t\tlist all the programs\n");
}

/* FUNCTIONS TO DO: */
//add_program();
//remove_program();
//list_programs();

void	select_option(int argc, char **argv)
{
	show_options(argc, argv);
}
