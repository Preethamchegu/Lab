#include<stdio.h>
int main()
{ int i,j;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
 if(i>=j){ 
 if(i==1)
 {printf("A");}
 if(i==2)
 {printf("B");}
 if(i==3)
 {printf("C");}
 if(i==4)
 {printf("D");}
 if(i==5)
 {printf("E");}
 }
 else {printf("");} 
  }
 printf("\n");
}
}