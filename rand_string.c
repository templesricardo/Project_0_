#include <stdlib.h>
#include <stddef.h>

void rand_string(char *s, size_t size)
{
    const char letters[] = "abcdefghijklmnopqrstuvwxyz";

    for (size_t i = 0; i < size; i++)
    {
        s[i] = letters[rand() % 26];
    }

    s[size] = '\0';
}