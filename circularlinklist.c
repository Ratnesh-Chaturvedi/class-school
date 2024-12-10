#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();

struct node {
    int info;
    struct node*link;
};
struct node*start=NULL;

int main(){
 create();
//  insert_beg();
// insert_end();
// delete_beg();
delete_end();
 display();

    return 0;
}

void create(){
    struct node*ptr,*next;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter node 1:");
    scanf("%d",&ptr->info);
    ptr->link=NULL;
    start=ptr;

    printf("Y/N");
    getchar();
    scanf("%c",&ch);

    while(ch=='Y' || ch=='y'){
        next=(struct node*)malloc(sizeof(struct node));
        printf("enter node:");
        scanf("%d",&next->info);
        ptr->link=next;
        ptr=next;
        printf("y/n");
        getchar();
        scanf("%c",&ch);
    }
    ptr->link=start;
}

void display(){
    struct node*ptr;
    ptr=start;
    do{
        printf("%d->",ptr->info);
       ptr=ptr->link;
    }while(ptr!=start);
    printf("start");
}

// insert at beg

void insert_beg(){
    struct node*ptr,*new;
    ptr=start;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter node:");
    scanf("%d",&new->info);
    while(ptr->link!=start){ // last wali node le lega ptr ab
        ptr=ptr->link;
    }
    new->link=start;
    start=new;
    ptr->link=start;
}

void insert_end(){
      struct node*ptr,*new;
    ptr=start;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter node:");
    scanf("%d",&new->info);
    while(ptr->link!=start){
        ptr=ptr->link;
    }
    ptr->link=new;
    new->link=start;

}

// delete from beg

void delete_beg(){
    struct node *ptr,*next;
    ptr=start;
    while(ptr->link!=start){
        ptr=ptr->link;
    }
    next=start;
    start=next->link;
    ptr->link=start;
    free(next);
}

//delete end

void delete_end(){
    struct node*ptr,*next;
    ptr=start;
    while(ptr->link!=start){
       next=ptr;
       ptr=ptr->link;
    }
 next->link=start;
 free(ptr);
}