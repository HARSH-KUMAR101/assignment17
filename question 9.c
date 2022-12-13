/*Write a C program to sort a string array in ascending order.*/
#include<stdio.h>
int main()
{ char str[50],ch;
  int i,j,l;
    printf("enter a string: ");
    fgets(str,50,stdin);
      for(l=0;str[l];l++);
      for(i=0;i<=l-2;i++)
      { for(j=i+1;j<=l-1;j++)
        { if(str[i]>str[j]){
            ch=str[i];
            str[i]=str[j];
            str[j]=ch;
         }
        }
      }
      printf("%s",str);
 return 0;
}
