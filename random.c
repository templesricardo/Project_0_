#include <stdlib.h>
#include <stddef.h>

void rand_string(char *s, size_t size) //make random string
{
    const char characters[] = "abcdefghijklmnopqrstuvwxyz"; 

    for (size_t i = 0; i < size; i++) {
        s[i] = characters[rand() % (sizeof(characters) - 1)];
    }

    s[size] = '\0';
}
