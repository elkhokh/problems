#include <stdio.h>
#include <stdlib.h>

extern int num1, num2;
extern float rez;
extern char op;
double calc (int num1 , float num2 , char op){
    double rez;
    switch(op) {
        case '+': rez = num1+num2; break;
        case '-': rez = num1-num2; break;
        case '*': rez = num1*num2; break;
        case '/': rez = num1/num2; break;
        //case '%': rez = num1%num2; break;
        default: printf("Invalid op"); break;
}
return rez;

}


















//#include "file.h"
//function defintion

/*int add(int x,int y){ return (x+y);}
int sub(int x,int y){ return (x-y);}
int mult(int x,int y){ return (x*y);}
int div(int x,int y){ return (x/y);}*/

/*int square(int x){
    return x*x;
}*/
/*void prnam(void){
  printf("mooooooooooooooooooooooooooooooo\n");
}
extern int num1,num2;
void swap(void){
    int s;
    s=num1;
    num1=num2;
    num2=s;
}
extern int n1,n2; 
extern float rez;
extern char op;
double calc(int n1, int n2, char op){
  float rez;
  switch(op){
        case'+':
          rez= n1+n2;
          break;
        case'-':
          rez= n1-n2;
          break;
        case'*':
                 rez= n1*n2;
           break;
        case'/':
           rez= n1/n2;
           break;
         default:printf("invalid!!");
         break;

    }
    return rez;
}
*/

/*int equation(int num1,int num2,char op);

 switch(op){
        case'+':
          rez= num1+num2;
          break;
        case'-':
          rez= num1-num2;
          break;
        case'*':
           rez= num1*num2;
           break;
        case'/':
           rez= num1/num2;
           break;
         default:printf("invalid!!");
         break;

    }
    return rez;
}
*/