#include <includes.h>

void	create_dir(void)
{
	char *user = getlogin();
	char *dirpath = calloc(strlen(user) + strlen("/home//program") + 1, sizeof(char));
	strcpy(dirpath, "/home/");
	strcat(dirpath, user);
	strcat(dirpath, "/program");
	mkdir(dirpath, S_IRWXU);
	free(dirpath);
}

char *get_path(void)
{
	const char *user = getlogin();
	const int len = strlen(user) + strlen("/home//program/database");
	char *path = talloc(len + 1, sizeof(char));
	strcpy(path, "/home/");
	strcat(path, user);
	strcat(path, "/program/database");
	return (path);
}

void	add_program(char *name)
{
	if (name == NULL)
		return ;
	create_dir();
	const char *path = get_path();
	FILE *file = fopen(path, "a+");
	fprintf(file, "%s\n", "vai se foder");
	clear_addrs();
}
