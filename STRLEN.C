#include<stdio.h>
#include<string.h>
int main()
{
char str[80];
printf("enter string");
gets(str);
printf("length of the string=%d",strlen(str));
return 0;
}