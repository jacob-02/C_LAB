#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct component
{
    char details[100];
    int priority;
};
struct node
{
    struct component compo;
    struct node *link;
};
struct queue
{
    struct node *head;
};
struct node *high(struct queue *p)
{
    int priority_value = ((p->head)->compo).priority;
    struct node *temp;
    temp = p->head;
    while (temp != NULL)
    {
        if ((temp->compo).priority > priority_value)
        {
            priority_value = (temp->compo).priority;
        }
        temp = temp->link;
    }
    temp = p->head;
    while (1)
    {
        if ((temp->compo).priority == priority_value)
        {
            break;
        }
        temp = temp->link;
    }
    return temp;
}
struct node *low(struct queue *p)
{
    struct node *temp;
    int priority_value = ((p->head)->compo).priority;
    temp = p->head;
    while (temp != NULL)
    {
        if ((temp->compo).priority < priority_value)
        {
            priority_value = (temp->compo).priority;
        }
        temp = temp->link;
    }
    temp = p->head;
    while (1)
    {
        if ((temp->compo).priority == priority_value)
        {
            break;
        }
        temp = temp->link;
    }
    return temp;
}
void enqueue(struct queue *p)
{
    char det[20];
    int priority;
    printf("Enter the details of the newnode\n");
    scanf("%s", det);
    printf("Enter the priority of the newnode\n");
    scanf("%d", &priority);
    struct node *temp;
    struct node *newnode;
    struct node *new;
    new = low(p);
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));
    temp->link = p->head;
    while (temp->link != low(p))
    {
        temp = temp->link;
    }
    int k = 0;
    if (temp->link == p->head)
    {
        k = 1;
    }
    temp->link = newnode;
    newnode->link = new;
    strcpy((newnode->compo).details, det);
    (newnode->compo).priority = priority;
    if (k == 1)
    {
        p->head = newnode;
    }
}
void dequeue(struct queue *p)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->link = p->head;
    while (temp->link != high(p))
    {
        temp = temp->link;
    }
    struct node *new;
    new = high(p);
    int k = 0;
    if (temp->link == p->head)
    {
        k = 1;
    }
    if (k == 1)
    {
        p->head = new->link;
    }
    else
    {
        temp->link = new->link;
    }
}
void display(struct queue *p)
{
    struct node *temp;
    temp = p->head;
    while (temp != NULL)
    {
        printf("%s %d \n", (temp->compo).details, (temp->compo).priority);
        temp = temp->link;
    }
}
void init(struct queue *p, char head_set[100], int head_priority)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    p->head = temp;
    strcpy((temp->compo).details, head_set);
    (temp->compo).priority = head_priority;
}
int main()
{
    struct queue *p, queue1;
    p = &queue1;
    char s[100];
    int n;
    printf("Enter the details of the head of the queue\n");
    scanf("%s", s);
    printf("Enter the priority of the head\n");
    scanf("%d", &n);
    init(p, s, n);
    char choice[20];
    printf("Enter your choice.\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.display\n");
    printf("4.exit\n");
    scanf("%s", choice);
    while (1)
    {
        if (strncmp(choice, "enqueue", 7) == 0)
        {
            enqueue(p);
        }
        else if (strncmp(choice, "dequeue", 7) == 0)
        {
            dequeue(p);
        }
        else if (strncmp(choice, "display", 7) == 0)
        {
            display(p);
        }
        else if (strncmp(choice, "exit", 4) == 0)
        {
            break;
        }
        else
        {
            printf("invalid choice");
            printf("Enter your choice.\n");
            printf("1.enqueue\n");
            printf("2.dequeue\n");
            printf("3.display\n");
            printf("4.exit\n");
            scanf("%s", choice);
        }
        printf("Enter your choice.\n");
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.exit\n");
        scanf("%s", choice);
    }
    return 0;
}