#include <stdlib.h>
#include <stddef.h>

void rand_string(char *s, size_t size)
{
<<<<<<< HEAD
    const char letters[] = "abcdefghijklmnopqrstuvwxyz"; //make word

    for (size_t i = 0; i < size; i++)
    {
        s[i] = letters[rand() % 26];
    }

    s[size] = '\0';
}
=======
    const char characters[] = "abcdefghijklmnopqrstuvwxyz"; 

    for (size_t i = 0; i < size; i++) {
        s[i] = characters[rand() % (sizeof(characters) - 1)];
    }

    s[size] = '\0';
}
>>>>>>> 751e2d8d6fedcd3a80d544fe1b2fbfa32ba3d298
