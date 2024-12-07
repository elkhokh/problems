#include <stdio.h>
/*void main(){
    int w;
    scanf("%d",&w);
    int y= ((w%2==0)&&(w>2))?1:0;
    if(y==1){
    printf("YES");}
    else{ printf("NO");}
}*/
int main() {
    int n;
    scanf("%d", &n); // Read the number of words

    char words[101]; // Array to store the words, assuming max length of 100

    // Read each word
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Process each word (this example just prints the word as is)
    for (int i = 0; i < n; i++) {
        printf("%s", words[i]);
    }

    return 0;
}
/*
#include "STD_TYPES.h"

typedef union {
    struct {
        u8 B0 : 1 ;
        u8 B1 : 1 ;
        u8 B2 : 1 ;
        u8 B3 : 1 ;
        u8 B4 : 1 ;
        u8 B5 : 1 ;
        u8 B6 : 1 ;
        u8 B7 : 1 ;
    }bit ;  //object from struct 
    u8 byte ;
}Register ; 
 void main(){
 Register x ;
 x.bit.B0= 0;
 x.bit.B1= 1;
 x.bit.B2= 0;
 x.bit.B3= 1;
 x.bit.B4= 0;
 x.bit.B5= 1;
 x.bit.B6= 0;
 x.bit.B7= 0;
 printf("size B0 = %d \n",x.bit.B0);
 printf("size B1 = %d \n",x.bit.B1);
 printf("size B2= %d \n",x.bit.B2);
 printf("size B3= %d \n",x.bit.B3);
 printf("size B4= %d \n",x.bit.B4);
 printf("size B5= %d \n",x.bit.B5);
 printf("size B6 = %d \n",x.bit.B6);
 printf("size B7= %d \n",x.bit.B7);
 printf("size OF byte = %d \n",x.byte);


 }
*/
/* *************************************** */
/*typedef struct  {
    u8 salary;
    u8 bouns;
    u8 deduction;
} Employee;

//typedef struct employee  Employee ;
int main()
{
     //struct employee Mostafa, Ali, Islam;
     Employee Mostafa, Ali, Islam;
      printf("size  = %d ", sizeof(Mostafa));
    printf("\n");
    printf("PLZ Enter mostafa salary = ");
    scanf("%d", &Mostafa.salary);
    printf("PLZ Enter mostafa bonus =  ");
    scanf("%d", &Mostafa.bouns);
    printf("PLZ Enter mostafa deduction = ");
    scanf("%d", &Mostafa.deduction);
    printf("\n");
    printf("PLZ Enter Ali salary = ");
    scanf("%d", &Ali.salary);
    printf("PLZ Enter Ali bonus = ");
    scanf("%d", &Ali.bouns);
    printf("PLZ Enter Ali deduction = ");
    scanf("%d", &Ali.deduction);
    printf("\n");
    printf("PLZ Enter Islam salary = ");
    scanf("%d", &Islam.salary);
    printf("PLZ Enter Islam bonus = ");
    scanf("%d", &Islam.bouns);
    printf("PLZ Enter Islam deduction = ");
    scanf("%d", &Islam.deduction);
    printf("\n");
    u8 total = 0;
    total = (Mostafa.salary + Ali.salary + Islam.salary + Mostafa.bouns + Ali.bouns + Islam.bouns - Mostafa.deduction - Ali.deduction - Islam.deduction);
    printf("\n");
    printf("the finance team total = %d\n", total);
    return 0;
}*/