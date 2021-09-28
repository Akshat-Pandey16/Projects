#include<stdio.h>
#include<stdlib.h>

struct Node
{
     int data;
     struct Node* link;
} typedef Node;

struct List
{
     Node* start;
}typedef List;

void insert_beg(List* list, int element)
{
     Node* newNode=(Node*)malloc(sizeof(Node));
     newNode->data=element;
     newNode->link=list->start;
     list->start=newNode;
}

void insert_end(List* list, int element)
{
     Node* newNode=(Node*)malloc(sizeof(Node));
     newNode->data=element;
     newNode->link=NULL;
     if(list->start==NULL){
          list->start=newNode;
     }
     else{
     Node* temp=list->start;
     while(temp->link!=NULL){
          temp=temp->link;
     }
     temp->link=newNode;
     }
}

void display(List list){
     if(list.start==NULL){
          printf("\nEmpty loop\n");
     }
     Node* temp=list.start;
     while(temp!=NULL){
          printf("\n%5d\n",temp->data);
          temp=temp->link;
     }
}

void main()                                     //start of main
{
    List l;
    l.start=NULL;                               //initialize start with NULL(to indicate empty list)
    display(l);                                 //displays list(Empty)
    insert_beg(&l,100);                         //start-->100
    insert_beg(&l,200);                         //start-->100-->200
    insert_end(&l,300);                         //start-->100-->200-->300
    insert_end(&l,400);                         //start-->100-->200-->300-->400
    insert_end(&l,500);                         //start-->100-->200-->300-->400-->500
    insert_beg(&l,600);                        //start-->100-->200-->300-->400-->500-->600                  
    display(l);                                 //100-->200-->300-->400-->500-->600
}//end of main