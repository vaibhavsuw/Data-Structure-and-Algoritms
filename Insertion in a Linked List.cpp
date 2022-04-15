#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node * next;
};

void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
    cout << ptr->data<<" ";
    ptr = ptr->next;
    }
    cout << endl;
    
}

struct node * addinstarting(struct node *ptr,int val)
{
    struct node *F;
    F = (struct node *)malloc(sizeof(struct node));
    F->data = val;
    F->next = ptr;
    return F;
}

void addinend(struct node *ptr,int val)
{
    struct node *F;
    F = (struct node *)malloc(sizeof(struct node));
    F->data = val;
    ptr->next = F;
    F->next = NULL;
};
void addinbetween(struct node *ptr,int at, int val)
{
    struct node *I;
    I = (struct node *)malloc(sizeof(struct node));
    int count=0;
    struct node *p = ptr;
    
    while(count!=at-1)
    {
        p = p->next;
        count++;
    }
    I->next = p->next;
    I->data = val;
    p->next = I;
    
}

void addafter(struct node *ptr, int val)
{
    struct node *I = (struct node *)malloc(sizeof(struct node));
    I->data = val;
    I->next = ptr->next;
    ptr-> next = I;
}

int main()
{
    struct node *A;
    struct node *B;
    struct node *C;
    struct node *D;
    struct node *E;
    struct node *G;
    struct node *H;
    
    A = (struct node *)malloc(sizeof(struct node));
    B = (struct node *)malloc(sizeof(struct node));
    C = (struct node *)malloc(sizeof(struct node));
    D = (struct node *)malloc(sizeof(struct node));
    E = (struct node *)malloc(sizeof(struct node));
    G = (struct node *)malloc(sizeof(struct node));
    H = (struct node *)malloc(sizeof(struct node));
    
    A->data = 14;
    A->next = B;
    
    B->data = 15;
    B->next = C;
    
    C->data = 16;
    C->next = D;
    
    D->data = 17;
    D->next = E;
    
    E->data = 18;
    E->next = NULL;
    
    print(A);
    
    A = addinstarting(A,5);
    print(A);
    
    addinend(E,32);
    print(A);
    
    addinbetween(A,3,5);
    print(A);
    
    addafter(C,55);
    print(A);
    

    return 0;
}
