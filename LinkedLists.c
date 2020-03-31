#include<stdio.h>
#include<stdlib.h>
void display(void);
void insert(void);
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    int i=0,n;
    scanf("%d",&n);
    while(i<n){
        insert();
        i++;
    }
    display();
    return 0;
    }
void insert(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else {
    struct node* p;
    p=root;
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=temp;
    }
}
void display(){
    struct node* temp;
    temp=root;
    if(temp==NULL){
    }
    else
    {
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}