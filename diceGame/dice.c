#include <stdio.h>
#include "program.h"

int queue, pc, you;

int dice() {
    int r;
    while (queue < 2) {
    if (queue % 2 == 0) {
    r = 1 + rand() % 6;
    you += r;
    queue++;
    printf("%s: %d\n", name, r);
    } else {
    r = 1 + rand() % 6;
    pc += r;
    queue++;
    printf("PC: %d\n", r);
    }
    }
    queue = 0;
    return(0);
}