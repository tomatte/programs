#include <includes.h>

char *get_path(void)
{
	const char *user = getlogin();
	const int len = strlen(user) + strlen("/home//program/database");
	char *path = malloc(sizeof(char) * (len + 1));
	strcpy(path, "/home/");
	strcat(path, user);
	strcat(path, "/program/database");
	printf("len: %d\n", len);
	printf("end: %d\n", strlen("/home/suzy/program/database"));
	printf("len: %d   -   path: %s\n", strlen(path), path);
}

void	add_program(char *name)
{
	if (name == NULL)
		return ;
	
	const char *user = getlogin();
	// const int pid = open();
	get_path();
	
}