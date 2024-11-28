#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,roll,total;
    char sname[50];
    printf("Enter no of students ");
    scanf("%d",&n);
    FILE *fp;
    fp=fopen("LNMIITSTUDENT.JAVA","w");
    for(int i=0;i<n;i++) {
        printf("studentname rollno totalmarks %d",i+1);
        scanf("%s %d %d",sname,&roll,&total);
        fprintf(fp,"%s %d %d\n",sname,roll,total);
    }
    fclose(fp);
    fopen("LNMIITSTUDENT.JAVA","r");
    for(int i=0;i<n;i++) {
        fscanf(fp,"%s %d %d",sname,&roll,&total);
        printf("%s %d %d\n",sname,roll,total);
    }
    fclose(fp);


}