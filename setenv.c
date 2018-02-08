#include <stdio.h>

int main(int argc, char *argv[])
{
    putenv(argv[1]);

    exit(0);
}

