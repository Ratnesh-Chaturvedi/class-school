#include <stdio.h>
#include <stdlib.h>



void create();
void display();
void insert_beg();
void insert_end();
void insertAtPos();
void delete_Beg();
void delete_End();
void delete_Pos();
void reverse();
struct node{
    int info;
    struct node*link;
};
struct node*start=NULL;

int main(){

create();
// insert_beg();
// insert_end();
// insertAtPos();
// delete_Beg();
// delete_End();
// delete_Pos();
reverse();
display();
return 0;
}

void create(){
struct node*ptr,*next;
  char ch;
  ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==NULL){
    printf("no space");
    return ;
  }
 printf("enter node1:");
 scanf("%d",&ptr->info);
 ptr->link=NULL;

start=ptr;
 printf("<Y/N>");
 getchar();
 scanf("%c",&ch);
 while(ch=='Y' || ch=='y'){
    next=(struct node*)malloc(sizeof(struct node));
    if(next==NULL){
        printf("no memory");
        return ;
    }
    printf("enter node:");
   
    scanf("%d",&next->info);
   ptr->link=next;
    ptr=next;
printf("<Y/N>");
getchar();
 scanf("%c",&ch);
 }
 ptr->link=NULL;
}

void display(){
    struct node *ptr=start;
    while(ptr!=NULL){
        printf("%d->",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL");
}


// insert at begining

void insert_beg(){
    struct node *ptr;
    // int data;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&ptr->info);

   ptr->link=start;
   start=ptr;
}


//insert at end;
void insert_end(){
    struct node*ptr,*next;
    ptr=(struct node*)malloc(sizeof(struct node));
    next=start;
    printf("enter data that added to end:");
    scanf("%d",&ptr->info);

    while(next->link!=NULL){
        next=next->link;
    }
    next->link=ptr;
    ptr->link=NULL;

}

// insert at position

void insertAtPos(){
    struct node*ptr,*next;
    int data;
   next=start;

    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter value of node after which you want to insert:");
   scanf("%d",&data);
   printf("enter the data:");
   scanf("%d",&ptr->info);

   while(next->info!=data){
    next=next->link;
   }
   ptr->link=next->link;
   next->link=ptr;

}

//delete beg
void delete_Beg(){
    struct node*ptr;
    ptr=start;
    start=ptr->link;
    free(ptr);

}

//delete end

void delete_End(){
    struct node*ptr,*next;
    next=start;
    ptr=start;
    while(next->link!=NULL){
        ptr=next;
        next=next->link;
    }
    ptr->link=NULL;
    free(next);

}

//delete from position

void delete_Pos(){
    struct node*ptr,*prev;
    ptr=start;
    int data;
    printf("enter the node you want to delete:");
    scanf("%d",&data);
    while(ptr->info!=data){
        prev=ptr;
        ptr=ptr->link;
    }
    prev->link=ptr->link;
    free(ptr);
}

//reverse a list

void reverse(){
    struct node*ptr,*last=NULL,*next;
    ptr=start;
  while(ptr!=NULL){
    next=ptr->link;
    last=ptr;
    ptr=next;
  }
}