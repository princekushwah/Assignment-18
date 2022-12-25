#include<stdio.h>
void fun(char a[],char b[])
{
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
       for(j=0;b[j]!='\0';j++)
       {
           a[i]==b[i];
       }
    }
    if(a[i]==b[i])
        printf("same");
    else
        printf("not");

}
int main()
{
    char a[]="Ashish";
    char b[]="vikash";
    fun(a,b);
    return 0;
}
