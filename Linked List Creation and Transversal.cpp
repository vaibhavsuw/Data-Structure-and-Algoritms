#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
    int data;
    struct node * next;
};

void linkedListTraversal(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr ->next;
        
    }
}


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    
    head ->data = 14;
    head ->next = second;
    
    second ->data = 15;
    second ->next = third;
    
    third ->data = 16;
    third ->next = fourth;
    
    fourth ->data = 17;
    fourth ->next = NULL;
    
    linkedListTraversal(head);
    
    

    return 0;
}
