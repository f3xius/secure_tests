#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    if(1 == argc)
    {
        return EXIT_SUCCESS;
    }
    printf("%s\n", argv[1]);
    return EXIT_FAILURE;
}
