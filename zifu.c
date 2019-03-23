#include<stdio.h>
main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    {
        printf("%c is a digit£¡\n",ch);
    }
    else if(ch>=65&&ch<=90)

    {
        printf("%c is an uppercase letters£¡\n",ch);
    }
    else if(ch>=97&&ch<=122)
    {
      printf("%c is a lowercase letters£¡\n",ch);
    }
    else if(ch==32)
    {
        printf("%c is a space£¡\n",ch);
    }
    else
    {
        printf("%c is other character£¡\n",ch);
    }
}

