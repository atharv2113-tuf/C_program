#include <stdio.h>

int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;

    printf("please enter tha value of n:");
    scanf("%d",&n);


    printf("Sum of numbers from 1 to %d is %d\n", n, sum(n));
    
    
    return 0;
}