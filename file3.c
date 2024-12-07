#include <stdio.h>
void conv(int num);
int main() {
    int num;
    printf("input a decimal number: ");
    scanf("%d", &num);
    printf("\nBinary number is : ");
    conv(num);
}
void conv(int num){

    if (num>0){
        conv(num/2);
        printf("%d",num%2);
    } }






























    
 /*int binary = 0, i = 1, remainder;
   while (num != 0) {
       remainder = num % 2;
        num /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;}*/






























/*#include <stdio.h>
void main(void){
int n=22;
for (int i = 0; i >= 22; i/=2) {
        if ( i % 2 == 0)
           printf("0 "); 
        else {
         printf("1");   
        } 
        }printf("0 "); 
        printf("1");   }*/
      




/*
// تعريف الوظيفة التي تقوم بتحويل العدد العشري إلى تمثيله الثنائي
void decimalToBinary(int n) {
    // حجم العدد الصحيح في البتات
    int size = sizeof(int) * 8;
    // حلقة لتحويل العدد العشري إلى تمثيل ثنائي وطباعته
    for (int i = size - 1; i >= 0; i--) {
       // int bit;
        if ((n >> i) % 2 == 0){
           printf("%d", 0); 
        }else{
          printf("%d", 1);   
            
        }
      
    }
    // طباعة فاصلة جديدة للانتقال إلى سطر جديد
    printf("\n");
}

int main() {
    int decimalNum;
    
    // قراءة العدد العشري من المستخدم
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    
    // استدعاء الوظيفة لتحويل العدد العشري إلى تمثيله الثنائي وطباعته
    printf("Binary representation: ");
    decimalToBinary(decimalNum);
    
    return 0;
}*/