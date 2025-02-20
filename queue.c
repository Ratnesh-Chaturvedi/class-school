#include <stdio.h>
#include <stdlib.h>

// QUEUE using array

#define MAX 100
int q[MAX+1],front=-1,rear=-1;

void create();
void push();
void pop();
void traverse();

void main(){
     create();
    //  push();
pop();
      traverse();
}

void create(){
    front=0;
    char ch ;
    printf("want to create a Queue <Y/N>:");
    scanf("%c",&ch);
    do{
        rear++;
        printf("enter elem:");
        scanf("%d",&q[rear]);
        printf("Y/N:\n");
        scanf(" %c",&ch);
    } while(ch == 'y'); 

}

void traverse(){

    printf("\n elem in Q are:\n");
    for(int i=front;i<=rear;i++){
        printf("%d ",q[i]);
    }
}

void push(){
 int m;
 if(rear==MAX){
    printf("overflow:\n");
    return ;
 }
 printf("enter elem you want to push:");
 scanf("%d",&m);
 rear++;
 q[rear]=m;
}

void pop(){
    if(front==-1){
        printf("underflow:\n");
        return;
    }
    if(front==rear){
            q[front]='\0';
            front=rear=0;
    }
    else {
        q[front]='\0';
        front++;
    }
    printf("element deleted:\n");
}





//Queue using linked list

struct node {
    int info ;
    struct node*link;
};
struct node*front , *rear;


void pop();
void push();
void traverse();

void main(){
   
    int n;
    char ch;
    printf("<y/n>:\n");
    scanf("%c",&ch);
    while(ch=='y'){
        printf("enter choice:");
        scanf("%d",&n);
        switch(1){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            traverse();
            break;
            case 4:
            exit(0);
           
            default:
            printf("you entered wrong choice:\n");
        }
        
    }
}

void push(){
    struct node*ptr; 
    ptr=(struct node *)malloc(sizeof(struct node));
    int item;
    printf("enter elem:\n");
    scanf("%d",&item);
    ptr->info=item;
    ptr->link=NULL;
    if(front==NULL){
        front=ptr;
    }
    else rear->link=ptr;
    rear=ptr;
}

void pop(){
    struct node*ptr;
    if(front==NULL){
        printf("underflow\n");
        return;
    }
    if(front==rear){
        free(front);
        rear=NULL;
    }
    else {
        ptr=front;
        front=ptr->link;
        free(ptr);
    }
    printf("element is deleted:\n");
}

void traverse(){
    struct node*ptr;
    ptr=front;
    if(ptr==NULL){
        printf("No element\n");
        return;
    }
    else {
        printf("element in queue:\n");
        while(ptr!=NULL){
            printf("%d ",ptr->info);
            ptr=ptr->link;
        }
        printf("\n");
    }
}