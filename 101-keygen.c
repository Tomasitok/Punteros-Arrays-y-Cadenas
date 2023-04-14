#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KEYLEN 11

int main(void) {
    char key[KEYLEN];
    int i, sum, diff;

    srand(time(NULL));

    for (i = 0, sum = 0; sum < 2772 - '9'; i++) {
        key[i] = rand() % ('~' - ' ' + 1) + ' ';
        sum += key[i];
    }

    diff = sum - 2772 + '9';

    key[i] = diff;
    key[++i] = '\n';

    printf("%s", key);

    return 0;
}
