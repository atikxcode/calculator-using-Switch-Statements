#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){


int num1;
int num2;
char op;

printf("Enter the first number: ");
scanf("%d", &num1);

printf("Enter a operator: ");
scanf(" %c", &op);

printf("Enter the seconds number: ");
scanf("%d", &num2);

switch(op){

case '+' :
    printf("%d", num1 + num2);
    break;

case '-' :
    printf("%d", num1 - num2);
    break;
case '*' :
    printf("%d", num1 * num2);
    break;

case '/' :
        if(num2 == 0)
            printf("You cannot divide by 0! \n");
        else
    printf("%d", num1 / num2);
    break;

case '%' :
    printf("%d", num1 % num2);
    break;

    default:
        printf("Wrong mathematical operation.. Try again.\n");
}

return 0;

}
