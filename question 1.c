/*Write a program to calculate the length of the string. (without using builtin method)*/
#include<stdio.h>
int main()
{ char str[10]="harsh";
  int i=0,count=0;
   while(str[i]!='\0')
   { i++;
     count++;
   }
   printf("length of the given string is %d\n",count);
return 0;
}
