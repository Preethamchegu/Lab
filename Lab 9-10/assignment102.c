#include <stdio.h>
#include <stdlib.h>
int main() {
    char c;
    int alp=0,line=1,word=0;
    FILE *fp;
    fp=fopen("COOKER.H","w");
    while ((c=getchar())!= EOF)
    {putc(c,fp);}
    fclose(fp);
    fp=fopen("COOKER.H","r");
    printf("\n");
    while((c=getc(fp)) != EOF) {
        if (c != '\0') {
            alp++;
        }
        if(c == '\n')
          { line++;
            word++;
          }  
           
        if(c == ' ' )  
         word++;
    }

        printf("%d\n",alp-1);
        printf("%d\n",line);
        printf("%d",word+1);
        
        




    fclose(fp);

    return 0;
}