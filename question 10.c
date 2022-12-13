/*Write a program in C to Find the Frequency of Characters.*/
#include<stdio.h>
int main()
{ char str[20]="harshkumarpandey";
  int hash[150]={0};
  int i;

    for(i=0;str[i]!='\0';i++)
    {
        hash[str[i]]++;
    }
    for(i=0;i<123;i++)
    { if(hash[i]>0)
        printf("%c = %d \n",i,hash[i]);
    }
return 0;

}
