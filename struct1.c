#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define "SYD_TYEB.h"
#include "STD_TYPES.h"
struct person
{
   s16 code;
   u8 name[30];
   f32 salary;
};
void print_info(struct person p);
void inc_code(struct person *p);
void main(void)
{
   struct person p1, p2 = {200, "mostafa", 1000.10};
   struct person p3;
   struct person *ptr;
   p1.code = 100;
   strcpy(p1.name, "ahmed");
   p1.salary = 6000.60;
   printf("person one is\n========================================\n");
   print_info(p1);
   printf("person two is\n========================================\n");
   print_info(p2);
   inc_code(&p2);
   print_info(p2);
   p3 = p1;
   p3.salary = 9000.90;
   printf("person three is\n========================================\n");
   print_info(p3);
   ptr = &p1;
   ptr->code = 500;
   ptr->salary = 7000.70;
   printf("person one by pointer\n========================================\n");
   print_info(p1);
}
void print_info(struct person p)
{
   printf("code=%d\n", p.code);
   printf("name=%s\n", p.name);
   printf("salary=%7.2f\n", p.salary);
}

void inc_code(struct person *p)
{
   p->code++;
}
