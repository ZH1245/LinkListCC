 #include<stdio.h>

struct Node {
    int data;
    struct Node *next;
}*head, *tail;


void InsertAtStart(int);
void InsertAtEnd(int);
void Traverse();
void DeleteFromStart();
void DeleteFromEnd();
void main(){

head=tail=NULL;
InsertAtStart(3);
InsertAtEnd(2);

DeleteFromEnd();
Traverse();
}

void InsertAtStart(int value){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

void InsertAtEnd(int value){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
void Traverse(){
    struct Node *traverse=head;
    while(traverse != NULL){
        printf("%d\n", traverse->data);
        traverse = traverse->next;
    }
}

void DeleteFromStart(){
    if(head==NULL)
        {
        printf("EMPTY\n");
        }
    else{
            head=head->next;
    }
}
void DeleteFromEnd(){
    if(head==NULL)
        {
        printf("EMPTY\n");
        }
    else{
     struct Node *traverse = head;
     while(traverse->next!=tail)
     {
        // if(traverse->next==tail)
         //{
           //  tail=traverse;
            // tail->next=NULL;
         //}
         traverse=traverse->next;
     }
       tail=traverse;
       tail->next=NULL;
    }

}
