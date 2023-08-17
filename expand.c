
#include <stdio.h>
#include <string.h>

int main() {
int length,x,y;
char string[100];
printf("enter the string: ");
scanf("%s", &string);
printf("your entered string is %s\n", string);
// printf("the first letter of the entered strinf is %c", string[0]);
  if (string[0]=='-')
     {     
     // printf("the first letter has a symbol '-'");
      for (char ch = string[1]; ch<=string[3]; ch++ )
        {
            printf("%c", ch);
        }
     } 
else{
    length=strlen(string);
    printf("the length of string is %d\n",length);
    if(length>5)
    {
         for (char ch = string[0]; ch<=string[2]; ch++ )
             {
                printf("%c", ch);
             }
        
         for(int i =string[3]; i<=string[5];i++)
            {
              printf("%c", i);
             }    
       }
 else
      {
    // printf("there is no sign");
         for (char ch = string[0]; ch<=string[2]; ch++ )
            {
                printf("%c", ch);
            }
     }
}

    return 0;
}