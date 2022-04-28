#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        puts(" ");
    }
    else {
        int arguments = 1;
        for (int i = 2; i < argc; i++)  {
            if(strlen(argv[arguments])<strlen(argv[i])) {
                arguments = i;
            }
        }
        puts(argv[arguments]);
    }
    return EXIT_SUCCESS;
}