#include<stdio.h>
int numPrint(int);

int main() {
    int n = 1;
    printf("\n print first 50 natural numbers :\n");
    printf(" The natural numbers are :");
    numPrint(n);
    printf("\n\n");
    return 0;
}

int numPrint(int n) {
    if (n <= 50) {
        printf(" %d ", n);
        numPrint(n + 1);
    }
    return 0;
}