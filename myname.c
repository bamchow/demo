#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};

int main(){
    struct node *head;
    head->data=45;
    head->link=NULL;
     
     struct node*current=malloc(sizeof(struct node));
     current->data=90;
     current->link=NULL;
     head->link=current;

      current=malloc(sizeof(struct node));
      current->data=30;
      current->link=NULL;
      head->link->link=current;
      printf("%d",current->data);

     






}