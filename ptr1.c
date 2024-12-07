#include<stdio.h>
//pointer to function
int add(int x,int y);
int sub(int x,int y);
int mult(int x,int y);
int div(int x,int y);
void main (void){
int n1,n2,res=0, op;
int(*ptr1[4])(int ,int)={add,sub,mult,div};
 printf("n1="); scanf("%d",&n1);
 printf("n2="); scanf("%d",&n2);
 printf("to choice the operation = \n(0) is add \n(1) is sub \n(2) is mult \n(3) is div\n"); scanf("%d",&op);
 res=ptr1[op](n1,n2);
  printf(" the result =%d \n",res);
}
int add(int x,int y){ return (x+y);}
int sub(int x,int y){ return (x-y);}
int mult(int x,int y){ return (x*y);}
int div(int x,int y){ return (x/y);}

//************************
/*void disp(int x);
void main(void){
 void(*ptr1)(int);
 ptr1=&disp;
(*ptr1)(5);
}
void disp(int x){
    for(int i=0;i<x;i++)
    printf("abaaaaaas basha\n");
}*/
//***************************
/*int mofasa(int*ptrx,int*ptry);
int main(){
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={10,1,1,1,1};
    mofasa(arr1,arr2);
printf(" sum=%d \n",mofasa(arr1,arr2));
}
int mofasa(int*ptrx,int*ptry){
    int i,sum=0;
    for(i=0;i<5;i++){
    sum += ptrx[i] * ptry[i];
     }
   return (sum);
}*/