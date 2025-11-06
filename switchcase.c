#include<stdio.h>

int main(){
    char color;

    printf("Enter traffic light color");
    scanf("%c",&color);


    switch (color) {
            case 'r':
            printf("STOP");
            break;

            case 'y':
            printf("BE READY");
            break;

            case 'g':
            printf("GO");
            break;

    }
            return 0;
    }



    


