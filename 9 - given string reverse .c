#include <stdio.h>
#include <string.h>
void fun(char a[])
{
      int i, len;
    	len = strlen(a);
    	for(i = len - 1; i >= 0; i--)
	     {
		if(a[i] == ' ')
		{
			a[i] = '\0';
			printf("%s ", &(a[i]) + 1);
		}
	}
	printf("%s", a);
}
int main()
{
  	char a[100];
  	printf("Please Enter any String :  ");
  	gets(a);
  	fun(a);
    return 0;
}
