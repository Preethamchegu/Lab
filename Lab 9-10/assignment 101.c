#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    char s[50000],c;
    FILE *fp;
    fp=fopen("LNMIITSTUDENT.JAVA","w");
    fprintf(fp,"%s","hellohi ");
    fclose(fp);
    fp=fopen("LNMIITSTUDENT.JAVA","a");
    printf("enter text you want to add in file");
    gets(s);
    fprintf(fp,"%s",s);
    fclose(fp);
    fp=fopen("LNMIITSTUDENT.JAVA","r");
    while ((c=getc(fp))!=EOF)
        printf("%c",c);



}