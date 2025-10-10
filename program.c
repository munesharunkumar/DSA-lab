#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct queue {
    int r, f;
    int data[SIZE];
};

typedef struct queue QUEUE;

void enqueue(QUEUE *q, int item) {
    if (q->r == SIZE - 1) {
        printf("\nQueue full.");
    } else {
        if (q->f == -1) {
            q->f = 0;
            q->r = 0;
            q->data[q->r] = item;
        } else {
            q->data[++(q->r)] = item;
        }
        printf("\nInserted %d into queue.", item);
    }
}

void dequeue(QUEUE *q) {
    if (q->f == -1) {
        printf("\nQueue empty.");
    } else {
        printf("\nThe element deleted is %d", q->data[q->f]);
        if (q->f == q->r) {
            q->f = -1;
            q->r = -1;
        } else {
            q->f++;
        }
    }
}

void display(QUEUE q) {
    int i;
    if (q.f == -1) {
        printf("\nQueue empty.");
    } else {
        printf("\nQueue elements are:");
        for (i = q.f; i <= q.r; i++)
            printf(" %d", q.data[i]);
    }
}

int main() {
    int ch, item;
    QUEUE q;
    q.f = -1;
    q.r = -1;

    for (;;) {
        printf("\n1.Insert to Queue\n2.Delete from Queue\n3.Display Queue\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter item to insert: ");
                scanf("%d", &item);
                enqueue(&q, item);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice, try again.");
        }
    }
    return 0;
}
