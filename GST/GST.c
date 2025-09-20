#include<stdio.h>
int main()
{
    float b;
    char a;
    scanf("%c",&a);
    scanf("%f",&b);
    switch (a){
        case 'A':
        printf("%.2f",b);
        break;
        case 'B':
        b = b - ((b*2)/100);
        printf("%.2f",b);
        break;
        case 'C':
        b = b - ((b*5)/100);
        printf("%.2f",b);
        break;
        case 'D':
        b = b - ((b*12)/100);
        printf("%.2f",b);
        break;
        case 'E':
        b = b - ((b*18)/100);
        printf("%.2f",b);
        break;
        case 'F':
        b = b - ((b*28)/100);
        printf("%.2f",b);
        break;
        default:
        printf("Invalid choice");
        break;
    }
    return 0;
}