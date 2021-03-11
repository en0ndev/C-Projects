#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "program.h"
#include "askuser.c"
#include "dice.c"
#include "results.c"

char name[20], cho;

int main() {
    srand(time(0));
    printf("Type here to your name: ");
    scanf("%s", name);
    getchar();
    printf("Welcome to dice game %s. Press enter to dice\n", name);
    getchar();
    while(cho == 0 || cho == 'y' || cho == 'Y') {
    dice();
    results();
    askuser();
    }
}
