#include<stdio.h>
#include<stdlib.h>
struct node{
  int sno;
  int pop;
  struct node* next;
};
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  int n;
  int i;
  scanf("%d",&n);
  int del;
  scanf("%d",&del);
  struct node * head=(struct node *)malloc(sizeof(struct node));
  head->next=NULL;
  scanf("%d %d",&head->sno,&head->pop);
  struct node* temp=(struct node *)malloc(sizeof(struct node));
  temp=head;
  struct node * newnode;
  for(i=1;i<n;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d %d",&newnode->sno,&newnode->pop);
    temp->next=newnode;
    newnode->next=NULL;
    temp=newnode;
  }


  int j,k;
  for(j=0;j<del;j++){
  struct node * temp1;
  temp1=head;
  int min=head->pop;
  for(k=0;k<n-j;k++){
    if(temp1->pop<min){
      min=temp1->pop;
    }
    temp1=temp1->next;
  }
  struct node * temp2;
  temp2=head;
  struct node * temp3;
  if(head->pop==min){
    temp2=temp2->next;
    head=temp2;
  }
  else{
  while(temp2->pop!=min){
    temp3=temp2;
    temp2=temp2->next;
    }
    temp3->next=temp2->next;
    free(temp2);
  }
  }
  if(n==del){
    printf("0 0\n");
    continue;
  }
  else{
    struct node * temp6;
    temp6=head;
  for(i=0;i<n-j;i++){
    printf("%d %d\n",temp6->sno,temp6->pop);
    temp6=temp6->next;
  }
}
}
return 0;
}
