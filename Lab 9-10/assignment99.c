#include <stdio.h>
#include <stdlib.h>
int main() {
    char c;
    int j=0;
    FILE *fp;
    fp=fopen("COOKER.H","w");
    while ((c=getchar())!= '#')
    {putc(c,fp);}
    fclose(fp);
    fp=fopen("COOKER.H","r");
    printf("\n");
    while((c=getc(fp)) != EOF) {
        if (c=='a' || c=='e' || c=='i' || c=='o'  || c=='u' || c=='A' || c=='E' || c=='I' || c=='O'  || c=='U') {
            j++;
        }
    }

        printf("%d",j);




    fclose(fp);

    return 0;
}
