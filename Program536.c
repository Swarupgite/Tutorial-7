#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}


void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void Reverse(PPNODE Head)
{
    PNODE Previous, Next, Current;

    Previous = NULL;
    Next = NULL;
    Current = *Head;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;

        Current = Next;
    }
    *Head = Previous;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    PNODE ThirdNode = NULL;
    PNODE LastNode = NULL;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    ThirdNode = First;
    LastNode = First;

    ThirdNode = ThirdNode->next->next;

    LastNode = LastNode->next->next->next->next;

    LastNode->next = ThirdNode;

    Display(First);  // Error vala

    return 0;
}