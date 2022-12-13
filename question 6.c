/*Write a program to reverse a string.*/
#include<stdio.h>
int main()
{ char str[20],ch;
  int i,l;
    printf("enter a string:");
    fgets(str,20,stdin);
      for(l=0;str[l];l++);
        for(i=0;i<l/2;i++)
        { ch=str[i];
          str[i]=str[(l-1)-i];
           str[(l-1)-i]=ch;
        }
        printf("%s",str);
  return 0;
}
