/*Write a program in C to count the number of vowels and consonants in a string using a pointer.*/
#include<stdio.h>
int main()
{
    char str[26];
    int i,ch;
    int vowels=0,consonants=0;
    char *ptr;
    ptr=str;

    printf("Enter A string of charactors:");
    scanf("%s",str);
    for(i=0;*ptr!='\0';i++)
    {
       ch=str[i];
       if(ch=='a'||ch=='e'||ch=='i'
       ||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
       {
           vowels++;
       }
       else if(ch==' ')
       {
           continue;
       }
       else
       {
           consonants++;
       }
       ptr++; 
    }
    printf("numbers of vowelse:%d",vowels);
    printf("\nnumbers of consonants:%d",consonants);
    return 0;
}
