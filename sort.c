/* ******************************* */
/*  sorting >>Bubble sort */
/* ******************************* */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"
#define size 10
void sort(s16 *ptrA, s16 step, u8 type_sorting);
void main()
{
    s16 arr[size] = {5, 6, 2, 9, 1, 12, 55, 65, 2, 10};
    for (s16 iter = 0; iter < (size); iter++)
    {
        printf(" arr [%d] :: before sorting = %d\n", iter, arr[iter]);
    }
    printf(" **********************************\n*******************************\n");
    for (s16 iter = 0; iter < (size - 1); iter++)
    {
        for (s16 step = 0; step < (size - 1 - iter); step++)
        {
            if (arr[step] > arr[step + 1])
            {
                sort(arr, step, '+');
            }
        }
    }
    for (s16 iter = 0; iter < (size); iter++)
    {
        printf(" arr [%d] :: after sorting = %d \n", iter, arr[iter]);
    }
}
void sort(s16 *ptrA, s16 step, u8 type_sorting)
{

    switch (type_sorting)
    {
    case '^':
        /* ******************************************** */
        // sorting by bitmath using toggel operator
        // reg^=(1<<bit position)
        /* ******************************************* */
        ptrA[step] ^= ptrA[step + 1];
        ptrA[step + 1] ^= ptrA[step];
        ptrA[step] ^= ptrA[step + 1];
        break;
    case '+': /* ********************************************** */
              // sorting by swapping elements using arthimatic operator
              /* ******************************************** */
        ptrA[step] += ptrA[step + 1];
        ptrA[step + 1] = ptrA[step] - ptrA[step + 1];
        ptrA[step] -= ptrA[step + 1];
        break;
    default: /* ********************************************** */
        // sorting by swapping elements using variable
        /* ******************************************** */
        s16 temp;
        temp = ptrA[step];
        ptrA[step] = ptrA[step + 1];
        ptrA[step + 1] = temp;
        break;
    }
}
/* ***************************************************************************************** */