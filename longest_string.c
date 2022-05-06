#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *arguments = "";
    for (int i = 1; i < argc; i++)
    {
        if (strlen(arguments) < strlen(argv[i]))
        {
            arguments = argv[i];
        }
    }
    puts(arguments);
    return EXIT_SUCCESS;
}