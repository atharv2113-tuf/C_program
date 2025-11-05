#include<stdio.h>
int main(){
        int num1, num2, num3;
        printf("Please enter three numbers");
        scanf("%d %d %d",&num1, &num2, &num3);
if(num1>=num2 && num1>=num3)
        printf("num1 is the maximum\n");
else if(num2>=num1 && num2>=num3)
        printf("num2 is maximum\n");
else if(num3>=num1 &&num3>=num2)
        printf("num3 is maximum\n");
else
        printf("num1,num2,num3 are equal\n");

return 0;

}
