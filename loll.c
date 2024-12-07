#include <stdio.h>
void main (void){

int arr[10] , i ,sum=0 , avar;
for (i=0;i<10;i++){
    printf("enter number [%d] :",i);
    scanf("%d",&arr[i]);
    sum+=arr[i];
    avar=sum/10;
}
 printf("\n the sum = %d\n ",sum);
 printf(" the avarage = %d\n",avar);
printf("\n reverse numbers\n");
for (i=9;i>=0;i--){
    printf("reverse number [%d] : %d\n",i,arr[i]);
    }
}