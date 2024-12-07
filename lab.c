#include<stdio.h>
int plues(int x){
  int r=x+3;
  return r;
}
void main(){
  int a=plues(5);
  int x=2;
  int b=plues(x);
  printf("%d",b); 

}
/*void main (void){
int num,i,j,k;
  printf("enter the num of rows for pyramid: ");
 scanf("%d",&num);
for(i=1;i<=num;i++){
  for(j=0;j<=num-i;j++){
    printf(" "); 
  }
  for(k=0;k<i*2-1;k++){
    printf("*"); 
  }
     printf("\n");
}
}*/
/*void main (void){
  int num,i=1, fact=1;
  printf("enter the num: ");
 scanf("%d",&num);
 while(num>=i){
  fact*=i;
  i++;
 }
 printf("the fact of %d ! = %d ",num,fact);
}*/

//**************************
/*void main (void){
  int num;
   printf("enter the reduies: ");
 scanf("%d",&num);
 printf("your num %d is %s  ",num,((num%2)==0)? "even":"odd");
  }*/
//**************************
/*#include<math.h>
void main (void){

  int a,b,c;
  float s , area=0;
  printf("enter the sides: ");
 scanf("%d %d %d",&a,&b,&c);
 s=(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("the area of triangle: %4.2f ",area);

}*/
//***************************
/*#define PI 3.14
void main (void){
int r;
float area=0;
 printf("enter the reduies: ");
 scanf("%d",&r);
 area =PI * r*r;
printf("the area: %4.2f ",area);
}*/
//********************************
/*// fibonacci series  
void main (void){
 int f,f1=-1; int f2;   
int i=7;
do{
    f=f1+f2;
    f1=f2;
    f2=f;
    printf("value = %d \n :",f);
i--;
}
while(i>=1);
}*/
/*
void main (void){
int i=1; 
 float num,  sum=0 ;
 printf("value = %d : ",i);
 scanf("%f",&num);
while (num != 0){
     sum+=num;
     i++;
     printf("value = %d :",i);
     scanf("%f",&num);
     
}
printf("sum of %d is=% 4.2f\n",--i,sum);
 }
*/
 //*********************************
 
   /*void main (void){
   int count,value;
for(count=1;count<=10;count++){
   for(value=1;value<=10;value++) 
  printf("%d\t",count*value);
   printf("\n");
}*/
/*
//********************************
void main (void){
 int count,value,sum=0;
for(count=1;count<=10;count++){
  printf("plz value [%d]=",count);
  scanf("%d",&value);
  //if (value==0)
 // berak;
 if (value<0)
 continue;
  sum+=value;
}
printf("sum is=%d\n",sum);
}
*/

//************************************
/*
void main (void){
    double num1,num2;
    char op;
    printf("\ninput the opertor\n");
    scanf("%lf %c %lf",&num1,&op,&num2);
    if(op=='+')       
     printf("sum=%9.4lf",num1+num2);
    else if (op=='-') 
     printf("sub=%9.4lf",num1-num2);
    else if (op=='*')  
    printf("mul=%9.4lf",num1*num2);
    else if (op=='/')  
    printf("div=%9.4lf",num1/num2);
    else              
     printf("\ninvalid!!!");
     */ 
//**************
   /*void main (void){
   int c;
     printf("enter num: ");
     scanf ("%d",&c);
     //c=getche();
     if (c%2==0)
      printf("the num %d is even",c);
      else
       printf("the num %d is odd",c); }
*/

//********************************************
/*
// condition operator 
void main (void){
  int num1=100; int num2=200;
   int c;
   c=(num1<num2)?500:300;
     printf("yes=%d\n",c);
// set 1 at bit num 3 in x=5
int x=5;
x=x|(1<<3);
 printf(" set bit of 5 is =%d\n",x); 
 // clear 1 at bit num 2 in x=5
int y=5;
y=y&~(1<<2);
 printf(" clear bit of 5 is =%d\n",y);
 // toggel 1 at bit num 3 in x=5
int z=5;
z=z^(1<<3);
 printf(" clear bit of 5 is =%d\n",z);
}*/
/*

//*************************************

// clc by switch 
void main (void){
    double num1,num2;
    char op;
        printf("\ninput the opertor\n");
        scanf("%lf %c %lf",&num1,&op,&num2);
    switch(op){
        case'+': printf("sum=%9.4lf",num1+num2);
        break;
        case'-': printf("sub=%9.4lf",num1-num2);
        break;
        case'*': printf("mul=%9.4lf",num1*num2);
        break;
        case'/': printf("div=%9.4lf",num1/num2);
        break;
        default: printf("\ninvalid!!!");
        break;

    }
}
*/