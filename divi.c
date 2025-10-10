// Numbers that are divisible by 5 and 7 in range of 1 to 100
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}