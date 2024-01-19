
//create randchar() to return random char
//link random.c to print_random.c

#include <stdlib.h>
#include <time.h>

char randchar() {
    srand(time(NULL));
    return 'A' + (rand() % 26);
}
