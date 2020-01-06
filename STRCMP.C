#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
printf("enter first string");
gets(str1);
printf("enter second string");
gets(str2);
printf("alphabetically");
if(strcmp(str1,str2)>0)
printf("%s comes after %s",str1,str2);
else if(strcmp(str1,str2)<0)
printf("%s comes after %s",str2,str1);
else
printf("%s and %s are same",str2,str1);
return(0);
}