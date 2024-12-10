#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node*lpt;
    struct node*rpt;
};
struct node*start=NULL;

void create();
void display();
void insert_beg();
void insert_end();
void insert_btw();
void delete_beg();
void delete_end();
void delete_btw();

int main(){
    create();
delete_end();
    display();

    return 0;
}

void create(){
    struct node*ptr,*next;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter node:");
    scanf("%d",&ptr->info);
    ptr->lpt=NULL;
    start=ptr;

    printf("Y/N");
    getchar();
    scanf("%c",&ch);
    while(ch=='Y' || ch=='y'){
        next=(struct node*)malloc(sizeof(struct node));
        printf("enter another node:");
        scanf("%d",&next->info);
        ptr->rpt=next;
        next->lpt=ptr;
        ptr=next;
         printf("Y/N");
    getchar();
    scanf("%c",&ch);
    }
    ptr->rpt=NULL;
}

void display(){
    struct node*ptr;
    ptr=start;
    printf("NULL");
    while(ptr!=NULL){
        printf("<-%d->",ptr->info);
        ptr=ptr->rpt;
    }
    printf("NULL");
}

void insert_beg(){
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("node at beg:");
    scanf("%d",&ptr->info);
    ptr->rpt=start;
    start->lpt=ptr;
    start=ptr;
}

void insert_end(){
    struct node*ptr,*next;
     ptr=(struct node*)malloc(sizeof(struct node));
     printf("enter at last:");
     scanf("%d",&ptr->info);
     ptr->lpt=NULL;
     next=start;
     while(next->rpt!=NULL){
        next=next->rpt;
     }
    
     next->rpt=ptr;
     ptr->lpt=next;
     ptr->rpt=NULL;
}

//delete beg

void delete_beg(){
    struct node*ptr;
    ptr=start;
    start=ptr->rpt;
    start->lpt=NULL;
    free(ptr);
}


void delete_end(){
    struct node*ptr,*next;
    ptr=start;
    while(ptr->rpt!=NULL){
        next=ptr;
        ptr=ptr->rpt;
    }
    next->rpt=NULL;
    free(ptr);
}


