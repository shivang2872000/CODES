#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
int arr[256];
char str[100];
int i=0;
int ascii;
char t;
int k;
scanf("%d",&k);
while(k!=0){
  for(i=0;i<256;i++){
      arr[i]=0;
  }
scanf(" %[^\n]",str);
int l;
l=strlen(str);
for(i=0;i<l;++i)
{
t=str[i];
ascii=t;
arr[ascii]=arr[ascii]+1;
}
int count;
char r;
count=0;
for(i=0;i<l;++i){
t=str[i];
ascii=t;
if(count<(arr[ascii]+arr[ascii+32]))
{
count=arr[ascii]+arr[ascii+32];
r=t;
}
}
ascii=r;
if(r==32){
printf("sp\n");
}
else if( (ascii<=90 && ascii>=65)){
  r=ascii+32;
printf("%c\n",r);
}
else
{
  printf("%c\n",r);
}
k--;
}
}
