#include <stdio.h>
#include "program.h"

int wpc, wyou;

int results() {
    if (pc > you) {
        printf("PC Win\n");
        wpc++;
    }
    else if (pc == you) {
        printf("Tie\n");
    }
    else {
        printf("%s Win\n", name);
        wyou++;
    }
    you = 0;
    pc = 0;
    printf("%s: %d, PC: %d\n", name, wyou, wpc);
    return(0);
}
