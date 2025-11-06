#include <stdio.h>

int main() {

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if(a%2 == 0)
        printf("%d is even",a);

    else if(a==0)
        printf("Invalid number");
        
    else 
         printf("%d is odd",a);
        
    return 0;
}
