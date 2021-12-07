#include "shell.h"
/**
 * main - Main arguments functions
 * @ac: Count of argumnents
 * @av: Arguments
 * @env: Environment
 * Return: _exit = 0.
 */
int main(int ac, char **av, char **env)
{
	int pathValue = 0, status = 0, is_path = 0;
	char *line = NULL, /**ptr to inpt*/ **commands = NULL; /**tokenized commands*/
	(void)ac;
	while (1)/* loop until exit */
	{
		errno = 0;
		line = _getline_command();/** reads user input*/
		if (line == NULL && errno == 0)
			return (0);
		if (line)
		{
			pathValue++;
			commands = tokenize(line);/** tokenizes or parse user input*/
			if (!commands)
				free(line);
			if (!_strcmp(commands[0], "env"))/**checks if user wrote env"*/
				_getenv(env);
			else
			{
				is_path = _values_path(&commands[0], env);/** tokenizes PATH*/
				status = _fork_fun(commands, av, env, line, pathValue, is_path);
					if (status == 200)
					{
						free(line);
						return (0);
					}
				if (is_path == 0)
					free(commands[0]);
			}
			free(commands); /*free up memory*/
		}
		else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);/** Writes to standard output*/
			exit(status);
		}
		free(line);
	}
	return (status);
}
