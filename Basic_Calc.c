// You are using GCC
#include<stdio.h>

int main()
{
    float a,b,sum;
    char c;
    scanf("%f%c%f",&a,&c,&b);
    switch(c)
    {
        case '+':
        sum = a + b;
        printf("The result of %.2f + %.2f is %.2f.",a,b,sum);
        break;
        case '-':
        sum = a - b;
        printf("The result of %.2f - %.2f is %.2f.",a,b,sum);
        break;
        case '*':
        sum = a * b;
        printf("The result of %.2f * %.2f is %.2f.",a,b,sum);
        break;
        case '/':
        if(b == 0)
        {
            printf("Error: Division by zero is not allowed.");
        }
        else
        {
        sum = a / b;
        printf("The result of %.2f / %.2f is %.2f.",a,b,sum);
        }
        break;
        default:
      //  sum = a + b;
        printf("Invalid operator. Please enter a valid operator.");
        break;
    }
    return 0;
}