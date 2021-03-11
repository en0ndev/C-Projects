#include <stdio.h>
#include "program.h"

char cho;

int askuser() {
    printf("Do you want to play again? [Y/N]\n");
    scanf("%s", &cho);
    switch (cho)
    {
    case 'y':
    case 'Y':
    printf("********************************\n");
        break;
    case 'n':
    case 'N':
        break;
    default:
        break;
    }
    return(0);
}