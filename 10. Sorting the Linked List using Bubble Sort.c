// Sorting the linked list using bubble sort
#include <stdio.h>
#include <malloc.h>

typedef struct node{
    int data;
    struct node *next;
}list;

list *start=NULL, *newNode;

void sort(list *start)
{
    list *current=start, *index=NULL;
    int temp;

    if(start==NULL)
        return;
    else{
        while(current!=NULL){
            index = current->next;

            while(index!=NULL) {
                if(current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main()
{
    int n, i;

    printf("Enter the number of element in the linked list: ");
    scanf("%d", &n);

    printf("Enter linked list elements: ");
    for(i=0; i<n; ++i){
        newNode = (list*)malloc(sizeof(list));

        if(newNode==NULL)
            printf("No enough space");
        else{
            scanf("%d", &newNode->data);
            newNode->next = NULL;

            if(start==NULL)
                start = newNode;
            else{
                list *temp = start;
                while(temp->next!=NULL)
                    temp = temp->next;
                temp->next = newNode;
            }
        }
    }

    sort(start);

    list *temp=start;

    printf("\n\nSorted linked list: ");
    while(temp!=NULL){
        printf("%5d", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
