#include <bsd/string.h>
#include <stdio.h>

int main()
{
    char mydest[50] = "42 sheep ";
    char mysrc[] = "in a room";
    size_t result = strlcat(mydest, mysrc, 20);
    printf("'%s'\n", mydest);
    printf("'%zu'\n", result);
}