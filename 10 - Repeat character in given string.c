#include<stdio.h>
void fun(char a[])
{
    char hash[200]={0};
    int i;
    for(i=0;a[i]!='\0';i++)
    {
       hash[a[i]]++;
    }
     for(i=0;i<200;i++)
     {
       if(hash[i]>0)
        printf("%c ----> %d\n",i,hash[i]);
    }
}
int main()
{
    char a[30];
    printf("Enter string ");
    gets(a);
    fun(a);
    return 0;
}
