// Queue operations using linked list
#include <stdio.h>
#include <malloc.h>

typedef struct node{
    int data;
    struct node *next;
}queue;

queue *front=NULL,*rear=NULL;

void EnQueue(){
    queue *newNode;
    newNode=(queue*)malloc(sizeof(queue));
    if(newNode==NULL)
        printf("\tOverflow");
    else{
        printf("\nEnter an element: ");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(front==NULL)
            front=rear=newNode;
        else{
            rear->next=newNode;
            rear=newNode;
        }
        printf("\tInserted successfully!");
    }
}

void DeQueue()
{
    queue *temp=front;

    if(front==NULL)
        printf("\tUnderflow");
    else{
        temp = temp->next;
        free(front);
        front = temp;
        printf("\tDeleted successfully!");
    }
}

void display()
{
    queue *temp=front;

    printf("\nCurrent queue: ");
    if(temp==NULL)
        printf("Empty\n");
    else{
        while(temp!=NULL){
            printf("%5d", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int ch;

    do{
        printf("\nQueue operations:\n\t1.Insert\n\t2.Delete\n\t3.Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                EnQueue();
                display();
                break;
            case 2:
                DeQueue();
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    }while(ch!=3);

    return 0;
}
