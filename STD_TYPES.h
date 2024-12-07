
/*=================================================================================*/
/*  @File        : STD_TYPES.h                                                      */
/*  @Description : This file includes STD_TYPES macros                             */
/*  @Author      : Mustafa khaled Elkhokh                                          */
/*  @Date        : 10/9/2024                                                       */
/*  @mail        : mustafaelkhokhy@gmil.com                                        */
/*=================================================================================*/

/* File Gaurd by ifndef & endif */
#ifndef STD_TYPES_H
#define STD_TYPES_H 

/* unsigned numbers */
typedef unsigned char            u8 ;       // 1 Byte - 255 Bit
typedef unsigned short int       u16 ;      // 2 Byte     +
typedef unsigned long int        u32 ;      // 4 Byte     +
typedef unsigned long long int   u64 ;

/* signed numbers */
typedef signed char             s8 ;         // 1 Byte     - to +
typedef signed short int        s16 ;        // 2 Byte     - to +
typedef signed long int         s32 ;        // 4 Byte     - to +
typedef signed long long int    s64 ;

/* float numbers */
typedef float                   f32 ;       // 4 Byte
typedef double                  f64 ;       // 8 Byte
typedef long double             f128 ;      // 16 Byte

#define NOT_OK 0
#define OK 1
#endif
