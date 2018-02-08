#include <stdio.h>
#include <stdlib.h>

void setenv(void)
{
    static char temp[100];

    strcpy(temp, "mlange=temp");

    putenv(temp);
}

int main(int argc, char *argv[])
{
    setenv( );

    printf("TEMP=%s\n", getenv("mlange"));

    exit(0);
}

