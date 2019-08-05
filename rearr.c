#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int items[SIZE];
int front = -1, rear =-1;
int full()
{
    if( (front == rear + 1) || (front == 0 && rear == SIZE-1))
    return 1;
    else
    return 0;
}
void insert(int element)
{
    if(full())
    printf("\n Queue is full!! \n");
    else
    {
        if(front == -1)
        front=0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;

    }
}
int empty()
{
    if(front == -1)
    return 1;
    else
    return 0;
}
int rmv()
{
    int element;
    if(empty()) {
        printf("\n Queue is empty !! \n");
        return(-1);
    } else {
        element = items[front];
        if (front == rear){
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % SIZE;

        }
        return(element);
    }
}
void display()
{
    int i;
    if(empty()) printf(" \n Empty Queue\n");
    else
    {
        for( i = front; i!=rear; i=(i+1)%SIZE) {
            printf("%d ",items[i]);
        }
        printf("%d ",items[i]);
    }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--!=0){
  int n,i;
  scanf("%d",&n);
  int temp;
  for(i=0;i<n;i++){
    scanf("%d",&temp);
    insert(temp);
  }
  int arr1[100],arr2[100],arr3[100],arr4[100];
  int mid=(n/2);
  for(i=0;i<100;i++){
    arr1[i]=0;
  };
  for(i=0;i<100;i++){
    arr2[i]=0;
  };
  for(i=0;i<100;i++){
    arr3[i]=0;
  };
  for(i=0;i<100;i++){
    arr4[i]=0;
  };
  int temp2;
  int temp3;
  for(i=0;i<mid;i++){
    temp2=rmv();
    arr1[i]=temp2;
  }
  for(i=mid;i<n;i++){
    temp3=rmv();
    arr2[i-mid]=temp3;
  }
  for(i=1;i<=mid;i++){
    arr3[i-1]=arr1[mid-i];
  }
  for(i=mid;i<n;i++){
    arr4[i-mid]=arr2[n-i-1];
  }

  int temp5,temp6;
  for(i=0;i<mid;i++){
    temp5 = arr3[mid-1-i];
    insert(temp5);
    temp6= arr4[mid-1-i];
    insert(temp6);
  }
  if(n%2!=0){
    insert(arr4[mid]);
    display();
  }
  else{
  display();

}
for(i=0;i<n;i++){
  rmv();
}
printf("\n");
}
return 0;
}
