#include <stdio.h>
#include <stdlib.h>

// function declaration
double equation(int num1, int num2, char op);

// function definition
double equation(int num1, int num2, char op) {
    float rez;
    switch (op) {
        case '+':
            rez = num1 + num2;
            break;
        case '-':
            rez = num1 - num2;
            break;
        case '*':
            rez = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                rez = (float)num1 / num2; 
            } else {
                printf("Division by zero is not allowed!\n");
                rez = 0; 
            }
            break;
        default:
            printf("Invalid operation!!\n");
            rez = 0; 
            break;
    }
    return rez;
}


// main function
int main() {
    int num1, num2;
    float rez;
    char op;

    printf("Welcome to simple calculation\n\n");
    printf("Enter the equation [num1] [op] [num2]\n");
    printf("Number one: ");
    scanf("%d", &num1);
    printf("Number two: ");
    scanf("%d", &num2);
    printf("The operation: ");
    scanf(" %c", &op); 

   
    rez = equation(num1, num2, op);

    printf("Result: %f\n", rez);

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
int swap(int n1,int n2);
int main (){
  printf("Function: swap two numbers using function :\n");
  printf("\n*******************************************************\n");
int n1,n2;
  printf("Enter the number1 :");
 scanf("%d",&n1);
 printf("Enter the number2 :");
 scanf("%d",&n2);
printf(" before swapping n1=%d n2=%d\n ",n1,n2);
//printf(" ,n2=%d\n",n2);
printf(" after swapping n2=%d n1=%d\n",n2 ,n1);
//printf(" ,n1=%d\n",n1);
 }
int swap(int n1,int n2)
{
     return (n1,n2);
     return (n2,n1);

}*/
