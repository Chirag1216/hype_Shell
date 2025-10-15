#include "shell.h"

int main()
{
    char input[MAX_INPUT];
    char *args[MAX_ARGS];

    while (1)
    {
        printf("Enigma > ");
        fflush(stdout);

        read_command(input);
        parse_command(input, args);

        // Empty input — skip
        if (args[0] == NULL)
            continue;

        // Exit command
        if (strcmp(args[0], "exit") == 0)
        {
            printf("Exiting shell... bye!\n");
            break;
        }

        // Just echo the command back
        printf("%s\n", input);
    }

    return 0;
}
