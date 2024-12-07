#include <stdio.h>
#include <stdlib.h>
//#include "LIB/STD_TYPES.h"
#include "STD_TYPES.h"
// node
typedef struct Node {
    u32 Data;
    struct Node * NEXT ;
}ListNode;

// linked list
typedef struct List {
    u32 size;
    ListNode * HEAD ;
    
}LinkedList;

void List_InsertfirstNode(LinkedList * PL, u32 value);
void List_InsertLastNode(LinkedList * PL, u32 value);
void List_InsertNode(LinkedList * PL, u32 value,u32 Position);
void List_InitLinkedList(LinkedList * PL);
u8 List_isEmpty(LinkedList * PL);

void main(void)
{
    LinkedList L1 ;
    LinkedList * PL1 = &L1 ;

    List_InitLinkedList(PL1);
    if(List_isEmpty(PL1))
    {
        List_InsertfirstNode(PL1,10);
    }
    List_InsertLastNode(PL1,20);
}

void List_InitLinkedList(LinkedList * PL)
{
    PL->size = 0 ;
    PL->HEAD = NULL ;
}

u8 List_isEmpty(LinkedList * PL)
{
    if((PL->size == 0) && (PL->HEAD == NULL)) 
    {
        return 1 ;
    }
    else 
    {
        return 0 ;
    }
}

void List_InsertfirstNode(LinkedList * PL, u32 value)
{
    // create new ListNode by dynamic memory allocation
    ListNode * PN = (ListNode *) malloc(sizeof(ListNode));
    PN->Data = value ;
    PN->NEXT = PL->HEAD ;
    PL->HEAD = PN;
    PL->size++;
}

void List_InsertLastNode(LinkedList * PL, u32 value)
{
    // create new ListNode by dynamic memory allocation
    ListNode * PN = (ListNode *) malloc(sizeof(ListNode));
    PN->Data = value ;
    ListNode * PTemp = PL->HEAD ; // Node1
    // update position of PTemp from Node1 to last Node
    for(u32 i=0 ; i < (PL->size-1) ; i++)
    {
        PTemp = PTemp->NEXT ;
    }

    PN->NEXT = PTemp->NEXT ; // NULL
    PTemp->NEXT = PN ;
    PL->size++;
}
