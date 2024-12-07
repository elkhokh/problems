/* ***************************** */
// liner search
/* ******************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"
/*void main(void)
{
    float x[100], key;
    s16 i, n, pos;
    printf("Enter size<100");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("value [%d] \n", i);
        scanf("%f", &x[i]);
    }
    printf("Enter key to search about num you need");
    scanf("%f", &key);
    pos = -1;
    for (i = 0; i < n; i++)
    {
        if (x[i] == key)
        {
            pos = i;
            break;
        }
        if (pos == -1)
            printf("%f is not number", key);
        else
            printf("%f is nmber %d ", key, i);
    }
}*/
/* ***************************************************************** */
/* ***************************** */
// liner search
/* ******************************/
/*#define size 10
void main()
{
    s16num;
    s16 flag = 0;
    // s16 index;
    s16 arr[size] = {5, 6, 6, 9, 1, 6, 55, 6, 2, 6};
    s16 buffer[size];
    printf(" \nEnter number to search ");
    scanf("%d", &num);
    printf(" \n");
    for (s16 iter = 0; iter < (size); iter++)
    {
        if (arr[iter] == num)
        {
            buffer[flag] = iter;
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("the number you enter to search is not founded : %d \n ", num);
    }
    else
    {
        printf("the number you enter to search  : %d  is founded >> %d times \n ", num, flag);
        printf("the number you enter to search is : %d : \n ", num);
        for (s16iter = 0; iter < flag; iter++)
        {
            printf(" at index : [%d] \n ", buffer[iter]);
        }
    }
}*/
/* ***************************************************************** */
/* ***************************** */
// binary search
/* ******************************/
#define size 10
void main(void)
{
    s16 arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    s16 num;
    s16 index;
    s16 first = 0;
    s16 last = size - 1;
    s16 mid = (last + first) / 2;
    printf(" Enter number to search ");
    scanf("%d", &num);
    while (first <= last)
    {
        mid = (last + first) / 2;
        if (arr[mid] == num)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < num)
        {
            first = mid + 1;
        }
        else if (arr[mid] > num)
        {
            last = mid - 1;
        }
    }
    printf(" \n Element : %d is present at index : [%d] \n", num, index);
}