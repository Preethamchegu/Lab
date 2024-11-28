#include<stdio.h>
void book()
{ char b_name[1000],author[1000];
  int pub_date,pages;
  printf("enter book name:");
  gets(b_name);
  printf("enter author name:");
  gets(author);
  printf("enter published date:");
  scanf("%d",&pub_date);
  printf("enter no of pages:");
  scanf("%d",&pages);
  printf("book name:%s \n",b_name);
  printf("author name:%s \n",author);
  printf("published date:%d \n",pub_date);
  printf("pages:%d \n",pages);
   
}  
int main()
{ book();
}