#include <stdio.h>
#include <stdlib.h>
/*
void disp(int x);
int fact (int w);
void main (){*/
    /*
int sum=0,n;
float avr;
for (int i=0; i<10; i++){
     printf("[%d]= ",i);
    scanf("%d",&n);
    sum+=i;
}
 printf(" sum = %d \n",sum);
 avr=sum/10;

printf(" avr = %.2f \n",avr);
*/
/*
int i=0;
printf("numbers from 0 into 10 \n");
while(i<=10){
    printf(" %d ",i);
    i++;
}
i--;
printf("\nnumbers from 10 into 0 \n");
while(i>=0){
    printf(" %d ",i);
    i--;
}
/*
int i=1 , n ,x;
printf("enter the number : ");
scanf("%d",&n);
while(i<=n){
    x=n*i;
    printf(" %d  * %d = %d \n",n ,i,x);
    i++;
}*/
/*
int n=0 ,sumeven,sumodd;
do{ 
    if(n%2==0){
sumeven+=n;}
else{
sumodd+=n;}
++n;
}
while(n<=50);

printf(" sum of even = %d \n",sumeven);
printf(" sum of odd = %d \n",sumodd); 
*/
/*int n,fact=1;
printf("enter the number : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact*=i;
}
printf("the fact = %d",fact);*/
/*
 int num=5;
for(int i=1;i<=num;i++){
   for(int n=0;n<=num-i ;n++){
    printf(" ");
} 
  
for(int x=0;x<num*2-1;x++){
printf("*");
}
    printf("\n");
}
*/
/*
 printf("moooooo\n ");
    disp(4);
printf(" saaaaaa\n");
    disp(8);
printf("roooooooo\n ");
    disp(2);
    int u ;
    u=fact(4);
    printf("fact = %d",u);
}
void disp(int x){
    for(int i=0; i<=x;i++)
     printf("++--++--++--++--++-++--+--+++---+-\n ");
 }
int fact (int w){
    int fac=1;
   for(int b=1; b<=w;b++)
   fac*=b;
   return fac;
}*/


/*double calc (int num1 , float num2 , char op);
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

    printf("Result: %f\n", rez);

    return 0;
}
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

}*/
// swaping function
/*int num1,num2;
void swap(void);
void main(void){
 printf("Function: swap two numbers using function :\n");
  printf("\n*******************************************************\n");
  printf("Enter the number1 :");
 scanf("%d",&num1);
 printf("Enter the number2 :");
 scanf("%d",&num2);
printf(" before swapping n1=%d n2=%d\n ",num1,num2);
swap();
printf(" after swapping n1=%d n2=%d\n",num1,num2);
}
void swap(void){
    int s;
    s=num1;
    num1=num2;
    num2=s;
}*/
/*int min(int num1 , int num2);
int main(){
int num1,num2;
  printf("Enter the number1 :");
 scanf("%d",&num1);
 printf("Enter the number2 :");
 scanf("%d",&num2);
 
printf("number one is minmame: %d\n",min( num1, num2));
}
 int min(int num1 , int num2){
  int y=((num1<num2)?(num1):(num2));
 return y;
 }*/
# define elements 10
void main (void){
    int arr[elements] ,sum, avr;
    for(int i=0; i<elements;i++){
     printf(" Enter Number %d :  ",i);
     scanf("%d",&arr[i]);
     sum+=arr[i];
}
  printf(" the reverse array of numbers\n");
 
   for(int i=elements-1; i>=0;i--){
     printf(" Enter Number %d \n",arr[i]);
   }
   printf(" sum = %d \n",sum);
   printf(" avr = %.3f \n",(sum/(float)elements));
}