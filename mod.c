#include<stdio.h>
#include<stdlib.h>

typedef signed char s8 ;
typedef unsigned char u8 ;
typedef unsigned short int u16 ;
typedef signed short int s16 ;
typedef unsigned long int u32 ;
typedef signed  long int s32 ;
typedef unsigned long long int u64 ;
typedef signed long long int s64;
typedef float f16 ;
typedef double f64;
typedef long double f128 ;


void main(void){
    s32* ptr;
    ptr = (s32*) malloc (4);
    *ptr=10;
    printf( "enter num");
    scanf("%d",&*ptr);
}
