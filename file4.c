#include<stdio.h>
void drawrect(int l ,int w);
void main (void){
   printf("\nliving room\n");
   drawrect(16,16);
   printf("\ncloset\n");
   drawrect(16,8);
   printf("\nkitchen room\n");
   drawrect(4,4);
   printf("\nbed room\n");
   drawrect(8,8);
   printf("\nbathroom\n");
   drawrect(12,12);
}
void drawrect(int l, int w){
    int i,j;
    l/=2; w/=4;
     for(i=1;i<=w;i++){
     printf("\t\t");
     for(j=1;j<=l;j++)
     printf("\xDB");
     printf("\n");
}}
//***********************************

/*// factorial by function
//finction declaration
int facto(int n);
//function calling
int main (void){
    int n;
    printf("plz enter num:");
    scanf("%d",&n);
    printf("the fact of %d ! =%d ",n,facto(n));
    //another solve
    /*int z ;
    z= facto(n);
    printf("%d",z);*/
    //return 0;

/*// function definition
int facto(int n){
    int i;
    int fact=1;
     for(i=1;i<=n;i++)
     fact*=i;
     return fact; 
}
*/
//********************************************
/*
void disp(int n);
void main (void){
  printf("mofasa\n");
  disp(5);
 printf("ensggggggggsg\n");
  disp(3);
}
void disp(int n){
    int i;
     for(i=1;i<n;i++)
     printf("-----------\n");
}
*/
//******************************************\]
/*
void disp(void);
void main (void){
  printf("mofasa\n");
  disp();
 printf("ensggggggggsg\n");
  disp();
}
void disp(void){
     printf("-----------\n");
     printf("-----------\n");
     printf("-----------\n");
}
   */ 