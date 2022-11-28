#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

void exercise_001(void) {
    // Hello, World! - 21.11.2022 - A-20

    //Ausgabe Hallo Welt auf der Konsole
    printf("Hello, World!\n");

    //Success Return
    return;
}

void exercise_002(void) {
    //Simple Zahlen - 21.11.2022 - A-22
    //Deklarierierung und Initialisierung der lokalen Variablen
    float a = 8;
    float b = 4;

    //Ausgabe der Grundrechenarten
    printf("Sum: %f\n", a + b);
    printf("Difference: %f\n", a - b);
    printf("Product: %f\n", a * b);
    printf("Quotient: %f\n", a / b);

    //Success Return
    return;
}

int exercise_002a(int a, int b, int type) {
    // switch um rechenoperationen abzubilden
    switch (type) {
        case 0:
            return a + b;
        case 1:
            return a - b;
        case 2:
            return a * b;
        case 3:
            return a / b;
        // falls operation nicht gefunden wurde
        default:
            return 0;
    }
}

void exercise_003(void) {
    int random;
    int breakvalue = 45;
    int counter = 0;
    for(int i = 0; i < 10; i++) {
        if (i == 0) {
            printf("%d", rand() % 100);
            continue;
        }
        printf(", %d", rand() % 100);
    }
    printf("\n---------------------------\n");
    printf("Break Value: %d\n", breakvalue);
    do {
        random = rand() % 100;
        printf("Next Random: %d\n", random);
    } while (random != breakvalue);
    printf("---------------------------\n");
    while (counter < 20) {
        printf("Next Random (%d): %d\n", counter+1, rand() % 100);
        counter++;
    }
    return;
}

int main(void) {
    // 21.11.2022 - A-24

    /* Return der Sub-Functions als Main Return */

    // exercise_001();
    // exercise_002();

    srand(time(0));

    // printf("Result: %d", exercise_002a(4,2,1));

    exercise_003();
    return 0;
}


