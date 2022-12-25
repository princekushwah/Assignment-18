#include<stdio.h>
void fun(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s ",a);
}
int main()
{
    char a[]="AsHish";
    fun(a);
    return 0;
}
