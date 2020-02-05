#include <stdio.h>
#include "../include/myLibrary.h"

int main() {
    int a = 10,
        b = 20,
        result;

    result = sum(a, b);

    printf("The result of the sum of %i + %i is: %i!\n", a, b, result);

    return 0;
}
