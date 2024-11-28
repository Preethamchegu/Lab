#include<stdio.h>
int main()
{ int i,j;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
 if(i>=j){ 
 if(j==1)
 {printf("A");}
 if(j==2)
 {printf("B");}
 if(j==3)
 {printf("C");}
 if(j==4)
 {printf("D");}
 if(j==5)
 {printf("E");}
 }
 else {printf("");} 
  }
 printf("\n");
}
}