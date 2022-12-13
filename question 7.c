/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/
#include<stdio.h>
int main()
{ char str[50];
  int i=0,digitcount=0,alphacount=0,specialcount=-1;
     printf("enter a string: ");
     fgets(str,50,stdin);
       while(str[i]!='\0')
       { if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
           alphacount++;
         else if(str[i]>='0' && str[i]<='9')
            digitcount++;
         else
            specialcount++;
            i++;
       }
    printf("total num of alphabet is %d\n",alphacount);
    printf("total num of digits is %d\n",digitcount);
    printf("total num of special character is %d\n",specialcount);
return 0;
}
