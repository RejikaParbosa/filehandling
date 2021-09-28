#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    FILE *fptr;
    char x[100];
    int i,j,len=0,temp;

    fptr=fopen("D:\\data.txt","w+");


    printf("Enter a string: ");
    scanf("%[^\n]",x);
    len= strlen(x);


    printf("The reverse string is:");
    for(i=len-1;i>=0;i--)
    {
        fprintf(fptr,"%c",x[i]);
        printf("%c",x[i]);
    }
    fclose(fptr);
    return 0;
}
