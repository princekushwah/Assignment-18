#include <stdio.h>
#include <string.h>
void fun(char a[])
{
    int i,count=0;
     for (i = 0;a[i] != '\0';i++)
    {
        if (a[i]== ' ')
            count++;
    }
    printf("Number of words in given string are: %d\n", count+1);
}

int  main()
{
    char a[200];
    printf("Enter the string:\n");
    gets(a);
    fun(a);
    return 0;

}
