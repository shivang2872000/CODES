#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct node {
  int data;
  struct node * next;
};
int main(){
  int t;
  scanf("%d",&t);
  while(t--!=0){
  char str[100];
  int arr[100];
  int size,middle,sizearr;
  scanf(" %[^\n]",str);
  size=strlen(str);
  struct node * head;
  int j = 0, i;
  for(i=0;i<100;i++){
    arr[i]=0;
  }
  for (i = 0; i<size; i++) {
  	 if (str[i] == ' ') {
            j++;
        }
        else {
            arr[j] = arr[j] * 10 + (str[i] - 48);
        }
    }
  int count=0;
  int k=0;
  while(arr[k]!=0){
    count=count+1;
    k++;
  }
  sizearr=count;
  head=(struct node *)malloc(sizeof(struct node));
  head->data=arr[0];
  head->next=NULL;
  struct node * temp;
  struct node * newnode;
  temp=head;
  middle=(sizearr/2)+1;
  for(i=0;i<sizearr;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=arr[i];
    temp->next=newnode;
    temp=newnode;
    temp->next=NULL;
  }
  struct node *  temp1;
  temp1=head;
  for(i=0;i<middle;i++)
  {
    temp1=temp1->next;
  }
  printf("%d\n",temp1->data);
}
  return 0;

}
