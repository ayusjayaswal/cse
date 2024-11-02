#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
  int data;
  struct _node *next;
} node;

node * create(int data){
  node * tmp = (node *)malloc(sizeof(node));
  tmp->data = data;
  tmp->next = NULL;
  return tmp;
}

void insert_beginning(node ** head,int data){
  node * tmp = (node *)malloc(sizeof(node));
  tmp->data = data;
  tmp->next = *head;
}

void append(node **head,int data){
  node * last = *head;
  while(last->next){
    last = last->next;
  }
  node * tmp = (node *)malloc(sizeof(node));
  tmp->data = data;
  tmp->next = NULL;
  last->next = tmp;
}

void show(node * head){
  while(head){
    printf("%d\n",head->data);
    head = head->next;
  }
}

int main(){
  node * ll = create(2);
  append(&ll, 3);
  show(ll);
}
