#include<stdio.h>
#include<stdlib.h>
void main(){
double a =3.14159; int R;
double A=1;
scanf("%d",&R);
A=(double)R*R*a;
printf("A=%.5f",A);
}
/*void main(){
   int x=0x11223344;
   char *ptr =(char*)&x;
   printf("1st: %x\n",*ptr);
   printf("2nd: %x\n",*(ptr+1));
   printf("3rd: %x\n",*(ptr+2));
   printf("4st: %x\n",*(ptr+3));
}*/
/*int errors;
int getsum(int n1 ,int n2);
int main(){
errors=getsum(4 ,3);
printf("error : %d\n",errors);
return 0;
}
int getsum(int n1 ,int n2){
errors=0;
if ((n1>5)||(n2>5)){
   errors=1;
}
else{printf("Value of sum is : %d\n",(n1+n2)); }

return errors;
}*/
//function to pointer
/*int func(int x);
int main(){
   int (*ptrf)(int x);// declaration of function to pointer
   ptrf = &func; // assign pointer to function
   int rez= ptrf(10); // return function to pointer
printf("++x : %d\n",rez);
return 0;   
} 
int func(int x){
    printf("Value of x is : %d\n",x); 
    return ++x;  
}*/
/*void swap(int*x,int*y);
void main(){
   int x,y;
    printf("Enter the number1 :");
 scanf("%d",&x);
 printf("Enter the number2 :");
 scanf("%d",&y);
printf(" before swapping n1=%d n2=%d\n ",x,y);
swap(&x,&y);
printf(" before swapping n1=%d n2=%d\n ",x,y);

}
void swap(int*x,int*y){
int z;
z=*x;
*x=*y;
*y=z;
}*/

/*void main(void){
   int sum;
   int arr[5];
   int*ptr=arr;
   for(int i=0;i<5;i++){
      printf("arr[%d]= ",i);
      scanf("%d",&arr[i]);
      sum+=*ptr++;
   }
   printf("sum of nums is :%d\n",sum); 
}*/
/*void main(){
   int x=8;
   char y=10;
   double w=12;
   int * ptr1=&x;
   char*ptr2=&y;
   double*ptr3=&w; 

   printf("value of x before increment :%d\n",&x);
   printf("value of x before increment :%d\n",&y);
   printf("value of x before increment :%d\n",&w);
   printf("value of x before increment :%d\n",ptr1);
   printf("value of x before increment :%d\n",ptr2);
   printf("value of x before increment :%d\n",ptr3);
   printf("*************************************\n");  
   ptr1++;
   ptr2++;
   ptr3++;
   printf("value of x after increment :%d\n",&x); 
   printf("value of x after increment :%d\n",&y); 
   printf("value of x after increment :%d\n",&w); 
   printf("value of x after increment :%d\n",ptr1); 
   printf("value of x after increment :%d\n",ptr2); 
   printf("value of x after increment :%d\n",ptr3); 
}*/
/*void main(){
   int x=8;
   int * ptr=&x;
   printf("value of x :%d\n",x);     //8
   printf("value of ptr :%d\n",*ptr); // 8
   printf("adress of x :%d\n",&x);    // 500040
   printf("value of x :%d\n",ptr); // 500040
   printf("adress of ptr :%d\n",&ptr); // 500048
    printf("value of x :%p\n",&x);  
     printf("value of x :%u\n",&x);  
*ptr=55;
   printf("value of x :%d\n",x); 
}*/
/*void func(int x,int y,int *res1, int *res2);
void main(){
int sum,mult,x,y;
printf("plz enter nums :\n");
printf("x first number=");
scanf("%d",&x);
printf("y second number=");
scanf("%d",&y);
 func(x,y,&sum,&mult);
printf("  sum = %d\n  mult = %d \n",sum,mult);
}
void func(int x,int y,int *res1, int *res2){
   int sum =x+y;
   int mult =x*y;
   *res1=sum;
   *res2=mult;
}*/

/*int mofasa(int*ptrx,int*ptry);
int main(){
int x,y,sum,mult;
sum=;
int *ptry=&mult;
printf("plz enter nums :\n");
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
printf(" nums after swaping sum=%d  mult=%d \n",mofasa(sum,mult));
}
int mofasa(int*ptrx,int*ptry){
   int sum =x+y;
   int mult =x*y;
*ptrx=sum;
*ptry=mult;
   return (sum,mult);
}*/
//*******************************************


//*****************************
/*void swap(int*ptrx,int*ptry);
void main(){
int x,y;
//int *ptrx=&x;
//int *ptry=&y;
printf("plz enter nums :\n");
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
printf(" nums before swaping x=%d  y=%d \n",x,y);
 swap(&x,&y);
printf(" nums after swaping x=%d  y=%d \n",x,y);
}
void swap(int*ptrx,int*ptry){
   int mediator;
   mediator=*ptrx;
   *ptrx=*ptry;
   *ptry=mediator;
}*/

//************************************
/*void main (void){
int i,sum=0 ;
int arr[6]={10,20,30,40,50,60};
int *ptr=arr;
for(i=0;i<6;i++){
    printf("value of array is [%d] = %d\n",i,arr[i]); 
    sum+=*ptr;
    ptr++;
}
printf("sum is = %d\n",sum);   
}*/
//**************************************
/*void main (void){
int arr[6]={10,20,30,40,50,60};
int *ptr=arr;
printf("value is = %d\n",*ptr);      //10
printf("value is = %d\n",++*ptr);    //11
printf("value is = %d\n",*++ptr);    //20
printf("value is = %d\n",*ptr++);    //20
printf("value is = %d\n",*ptr);      //30
printf("value is = %d\n",++*ptr++);  //31
printf("value is = %d\n",*ptr);      //40
printf("value is = %d\n",(*++ptr)++);//50
printf("value is = %d\n",*ptr);      //51
printf("value is = %d\n",++(*ptr));  //52

}*/
//*******************************************
/*void main (void){
    int x=250 ;
    char y=100 ;
    int *ptrx=&x;
    char *ptry=&y;
    printf("value of x = %d\n",ptrx);
    ptrx++;
    printf("value of x = %d\n",ptrx);
    printf("------------------------------\n");
    printf("value of x = %d\n",*ptrx);
    printf("------------------------------\n");
    printf("value of x = %d\n",ptry);
    ptry++;
    printf("value of x = %d\n",ptry);
    printf("------------------------------\n");
    *ptry=52;
    printf("value of x = %d\n",y);
}*/