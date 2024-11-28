#include<stdio.h>
int main()
{
 int b[2][5],B,i,sp=0,q;
 for(i=0;i<5;i++)
 {
   b[0][i]=i;
   b[1][i]=0;
 }
printf("no.of ballets");
scanf("%d",&B);
 for(i=1;i<=B;i++)
 {
  printf("enter your candidate number whom  you want to vote:");
  scanf("%d",&q);
  
 switch(q)
 {
  case 1: {b[1][0]+=1;}
          break;
  case 2: {b[1][1]+=1;}
          break;
  case 3: {b[1][2]+=1;}
          break;
  case 4: {b[1][3]+=1;}
          break;
  case 5: {b[1][4]+=1;}
          break;
  default: {sp+=1;}
 }
 }
 for(i=0;i<5;i++)
    printf("votes for %d candidate is %d \n",i+1,b[1][i]);
 
    printf("no. of spoilt-ballots %d",sp);
 
 }
 
 
 
 
 
 






 
 

 
 