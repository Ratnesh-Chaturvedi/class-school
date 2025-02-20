
// stack 

#define size 5
int stack[size];
int top=-1;
    void push();
    void pop();
    void traverse();

int main(){
int n;

while(1){
printf("enter choice:");
scanf("%d",&n);
switch(n){
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
   printf("enter choice again");
}
}

}

//push operation
 
 void push(){
    int num;
    if(top==size-1){
        printf("stack overflow \n ");
        return;
    }
    top++;
    printf("enter num:");
    scanf("%d",&num);
stack[top]=num;

     }

 void pop(){
     if(top==-1 ){
        printf("underflow \n ");
        return;
     }
     printf("popped elem:%d",stack[top]);
      top--;
     }

void traverse(){
    if(top==-1){
        printf("no elem:\n");
        return ;
    }
    printf("stack element:\n ");
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}

// stack by linked list

struct node{
    int info;
    struct node*link;
};
struct node *top=NULL;

void create();
void traverse();
void push();
void pop();

void  main(){
    void create();
int n;
while(1){
printf("enter choice:");
scanf("%d",&n);
switch(n){
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
   printf("enter choice again");
}
}
traverse();
}
void create(){
    struct node *ptr,*next;
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("input first node:");
    scanf("%d",ptr->info);
    ptr->link=NULL;
    do{
        next=(struct node*)malloc(sizeof(struct node));
        printf("enter another node:");
        scanf("%d",next->info);
        next->link=ptr;
        ptr=next;
        printf("enter choice<y/n>:");
        scanf("%c",&ch);
    }while(ch=='y');
    top=ptr;
}

void push(){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("overflow\n");
        return ;
    }
    printf("enter new node:");
    scanf("%d",&ptr->info);
    ptr->link=top;
    top=ptr;
}

void pop(){
        struct node *ptr;
        if(top==NULL){
            printf("underflow\n");
            return ;
        }
        ptr=top;
        top=ptr->link;
        free(ptr);
}
void traverse(){
    struct node *ptr;
    printf("traversing stack:\n");
    ptr=top;
    while(ptr!=NULL){
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
}
