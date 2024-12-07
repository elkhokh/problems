#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(){
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
     rez = calc(num1, num2, op);

    printf("Result: %.3f\n", rez);

    return 0;
}








































//function calling
/*void main (void){
int n1,n2,res=0, op;
int(*ptr1[4])(int ,int)={add,sub,mult,div};
 printf("n1="); scanf("%d",&n1);
 printf("n2="); scanf("%d",&n2);
 printf("to choice the operation = \n(0) is add \n(1) is sub \n(2) is mult \n(3) is div\n"); scanf("%d",&op);
 res=ptr1[op](n1,n2);
  printf(" the result =%d \n",res);
}*/
//function calling
//int main()

 /*int x;
 printf("input any number:",x);
 scanf("%d",&x);
 printf("the square is :%d",square( x));*/


/*int num1,num2;
int main(){

    prnam();

 printf("Function: swap two numbers using function :\n");
  printf("\n*******************************************************\n");
  printf("Enter the number1 :");
 scanf("%d",&num1);
 printf("Enter the number2 :");
 scanf("%d",&num2);
printf(" before swapping n1=%d n2=%d\n ",num1,num2);
swap();
printf(" after swapping n1=%d n2=%d\n",num1,num2);
  int n1,n2; 
     float rez;
    char op;*/

    /* int n1,n2; 
     float rez;
    char op;*/
    /*printf("welcome to simple calculation\n");
    printf("********************************\n");
    printf("enter the equation\n[num1] [op] [num2]\n");
    printf("number one =");
    scanf("%d",&n1);
    printf("number two =");
    scanf("%d",&n2);
    printf("the operation =");
    scanf("%c",&op);
    rez=calc(n1,n2,op);
     printf("Result: %f\n", rez);

    return 0;


}*/