#include<stdio.h>
void fun(char a[])
{
    int i,count=0;
  while(a[i]!='\0')
    {
        count++;
        i++;

    }
    printf("%d",count);
}
int main()
{
    char a[]="Ashish";
    fun(a);
    return 0;
}
