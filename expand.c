#include <stdio.h>
#include <string.h>

int main() {
char string[100];
printf("enter the string: ");
scanf("%s", &string);
printf("your entered string is %s\n", string);
// printf("the first letter of the entered strinf is %c", string[0]);
if (string[0]=='-'){
    // printf("the first letter has a symbol '-'");
      for (char ch = string[1]; ch<=string[3]; ch++ )
    {
        printf("%c", ch);
    }
} else{
    // printf("there is no sign");
      for (char ch = string[0]; ch<=string[2]; ch++ )
    {
        printf("%c", ch);
    }
}

    return 0;
}