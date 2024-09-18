#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,item,a[10]={2,3,4,5,6,7,8,9,34,54},n;
printf("Enter thr size of array");
scanf("%d",&n);
printf("Enter the item to searchg");
scanf("%d",&item);
for(i=0; i<=n-1; i++){
  if(item==a[i]){
      printf("The location ius %d",i);
