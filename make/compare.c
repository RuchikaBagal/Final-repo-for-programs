#include <stdio.h>
#include <string.h>
#include"file1.c"

// int compareStrings(const char *str1, const char *str2) {
//     if (strcmp(str1, str2) == 0) {
//         return 0; // Strings are equal
//     } else {
//         return -1; // Strings are not equal
//     }
// }

int main() {
    char string1[50];
    char string2[50];
    printf("enter your first string: ");
    scanf("%s", &string1);
    printf("enter your second string: ");
    scanf("%s", &string2);

    int result = compareStrings(string1, string2);
    
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}



// int main()
// {
//     char a[100],b[100],count1=0,count2=0,result=0;
//     printf("please add string 1:");
//     scanf("%s",a);
//     printf("please add string 2;");
//     scanf("%s",b);
//      while (a[count1] != '\0')
//         count1++;
//     while (b[count2] != '\0')
//         count2++;
//     if(count1==count2)
//        {    
//           for(int i=0;i<count1;i++)
//           {
//              if(a[i]==b[i])
//                {
//                   result=1;
//                }
//              else
//               {
//                  result=0;
//                  break;
//               }
//           }
//         }  
//     else{
//         result=0;
//         }
//     if(result==1)
//       {
//         printf("strings are same");
//       } 
//    else if(result==0)
//       {
//          printf("strings are different");

//       }
//       return 0;
// }