#include "shell.h"

void parse_command(char *input, char **args)
{
    char *token = strtok(input, " ");
    int i = 0;

    while (token != NULL && i < MAX_ARGS - 1)
    {
        args[i++] = token;
        token = strtok(NULL, " ");
    }

    args[i] = NULL;
}
