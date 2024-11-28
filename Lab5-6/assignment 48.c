#include<stdio.h>
int main()
{ int i,j;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
 if(j-(5-i)>0){ 
 if(j-(5-i)==1)
 {printf("1");}
 if(j-(5-i)==2)
 {printf("2");}
 if(j-(5-i)==3)
 {printf("3");}
 if(j-(5-i)==4)
 {printf("4");}
 if(j-(5-i)==5)
 {printf("5");}
 }
 else {printf(" ");} 
  }
 printf("\n");
}
}