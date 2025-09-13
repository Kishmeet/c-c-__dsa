#include<stdio.h>
#include<malloc.h>
int main(){
    FILE *a,*b,*c; char ch;
    a=fopen("fil.txt","r");
    if(a==NULL)
    {
        perror("error opening");
        return 1;
    }
    b=fopen("file.txt","r");
    
   if(b==NULL)
    {
        perror("error opening");
        return 1;

    }
    c=fopen("mergefile.txt","w");
    while((ch=getc(a))!=EOF)
    {
        putc(ch,c);
    }
    while((ch=getc(b))!=EOF)
    {
        putc(ch,c);
    }fclose(a);
    fclose(b);
    fclose(c)

}