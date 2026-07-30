#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Checkvowel
// Description :   Accept Character from user and check it is Vowel or not
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

typedef int Bool;
#define True 1
#define False 0

Bool CheckVowel(char CValue)

{
    if(((CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U'||
    CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u')))
    {
        return True;
    }
    else
    {
        return False;
    }

   
}

int main()
{
    char cValue = '\0';
    Bool bRet = False;

   printf("Enter Character :\n");
   scanf("%c",&cValue);

   bRet = CheckVowel(cValue);

   if(bRet == True)
   {
    printf("It is Vowel");
   }
   else
   {
    printf("It is not Vowel");
   }

    return 0;
}

 