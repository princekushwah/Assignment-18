#include<stdio.h>
void fun(char a[])
{
    int i,alpha=0,digit=0;
    for(i=0;a[i]!='\0';i++)
        {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
           alpha++;
        else if(a[i]>='0'&&a[i]<'9')
            digit++;
        }
        if(alpha && digit)
            printf("Yes");
        else
            printf("No");

}
int main()
{
    char a[30];
    printf("Enter Alphanumeric value ");
    gets(a);
    fun(a);
    return 0;
}
