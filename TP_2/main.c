//
// Created by draia on 10/10/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG printf("file %s; line %d\n", __FILE__, __LINE__);
#define FAIL_OUT exit(EXIT_FAILURE);
#define MALLOC_FAIL printf("!_malloc failed_!\n"); DEBUG; FAIL_OUT;
#define EMPTY_OR_NULL printf("this data structure doesn't have a positive integer value as its size, or the pointer to it isn't valid\n"); DEBUG;

#include "tp2ex1.h"
//#include "tp2ex2.h"
//#include "tp2ex3.h"
//#include "tp2ex4.h"
//#include "tp2ex5.h"
//#include "tp2ex6.h"
//#include "tp2ex7.h"
//#include "tp2ex8.h"
//#include "tp2ex9.h"

int main(int argc, char *argv[]) {
    //ex1
    if (argc == 4) {
        char *mode = argv[1];
        char *f1_name = argv[2];
        char *f2_name = argv[3];
        if (strcmp(mode, "copie") == 0) {
            copyFile(f1_name, f2_name);
        } else if (strcmp(mode, "diff") == 0) {
            showDiff(f1_name, f2_name);
        } else {
            printf("argument 1 is supposed to be \"copie\" or \"diff\"");
        }
    } else {
        printf("expecting exactly 3 arguments (mode, f1, f2)\n");
    }
    return 0;
}