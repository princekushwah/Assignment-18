#include<stdio.h>
void fun (char a[])
{
    int i,j;
    for(i=0;i<strlen(a)-1;i++)
    {
      for(j=strlen(a)-1;j>0;j--)
       {
         a[i]<=a[j];
       }
 }
    if(a[i]==a[j])
        printf("Yes");
    else
        printf("No");
}
int main()
{
    char a[20];
    printf("Enter your string ");
    gets(a);
    fun(a);
    return 0;
}
