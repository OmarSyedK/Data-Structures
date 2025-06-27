#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct 
{
    int arr[MAX_SIZE];
    int front;
    int rear;
} Queue;
void initialize(Queue*q)
{
    q->front=-1;
    q->rear=-1;
}
int isEmpty(Queue *q) {
    return q->front==-1;
}
int isFull(Queue *q) {
    return q->rear==MAX_SIZE-1;
}
void enqueue(Queue*q, int item){
    if(isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->arr[++(q->rear)]=item;
}
int dequeue(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty!\n");
        exit(1);
    }
        int dequeuedItem=q->arr[q->front];
        if(q->front==q->rear) {
            q->front=-1;
            q->rear=-1;
        }
        else {
            q->front++;
        }
        return dequeuedItem;
    }
    void display(Queue *q) {
        if (isEmpty(q)){
            printf("Queue is empty!\n");
            return;
        }
        printf("Queue elements are:\n");
        for(int i = q->front;i<=q->rear;i++){
            printf("%d", q->arr[i]);
        }
        printf("\n");
    }
    int main() {
        Queue q;
        int choice, value;
        initialize(&q);
        while(1) {
            printf("\nChoose an operation:\n");
            printf("1.Enqueue\n");
            printf("2.Dequeue\n");
            printf("3.Display\n");
            printf("4.Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch(choice) {
                case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                printf("Enqueued %d into the queue.\n", value);
                break;
                case 2:
                if(!isEmpty(&q)){
                    printf("Dequeued %d from the queue.\n", dequeue(&q));
                }
                break;
                case 3:
                display(&q);
                break;
                case 4:
                printf("Exiting...\n");
                exit(0);
                break;
                default:
                printf("Invalid choice! Please try again.\n");
            }
        }
        return 0;
    }

