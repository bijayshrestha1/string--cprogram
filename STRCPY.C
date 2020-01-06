#include<stdio.h>
#include<string.h>
int main()
{
char str1[20]="perfect";
char str2[20];
char str3[20];
strcpy(str2,str1);
strcpy(str3,"good");
puts(str2);
puts(str3);
getch();
return(0);
}
