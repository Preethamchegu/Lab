#include<stdio.h>

int main()
{
    struct emp
    {
        int emp_num;
        char emp_name[50];
        float basicpay;
    };
    int n,i;
    struct emp E[50];
    struct emp *ptr;
    printf("how many employees data you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         ptr=E+i;
         printf("enter employee name %d:",i+1); 
         scanf("%s",ptr->emp_name);
         printf("enter employee num:"); // for strings and & operator is not used for scanf and for others we have to use & operator //
         scanf("%d",&ptr->emp_num); 
         printf("enter employee basic pay:"); 
         scanf("%f",&ptr->basicpay); 
    }
    for(i=0;i<n;i++)
    {
        ptr=E+i;
        printf("employee %d data\n",i+1);
        printf("%s\n",(*ptr).emp_name);
        printf("%d\n",(*ptr).emp_num);
        printf("%.2f\n",(*ptr).basicpay);
        printf("\n");
    }
    
}