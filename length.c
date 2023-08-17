#include<stdio.h>
#include<string.h>
// int compare(const char *str1, const char *str2);

int main(){

    char str[50];
    int length=0;
    printf("enter the string:- ");
    scanf("%s", &str);
    // printf("your entered string is :%s\n", str);
    for (int i=0; str[i]!= '\0'; i++){
        length= length + 1;
        
    }
    printf("the length of the string that you've entered is %d", length);
    // printf("%d", length);
    return 0;
}







// int main(){
//     char str1[]= "Hello there";
//     char str2[]= " Hello there";
//     int result= compare(const char *str1, const char *str2);
//     if (result==0){
//         printf("strings are equal");
//     }else{
//         printf("strings are not equal");
//     }
//     return 0;

// }

// int compare(const char *str1, const char *str2)
// {
//     if (strcmp(str1, str2)==0){
//         return 0;
//     } else{
//         return -1;
//     }
//     return 0;
// }





// int main(){
//     char str1, str2;
//     int i,j;
//     printf("enter first string: ");
//     scanf("%s", &str1);
//     printf("enter second string: ");
//     scanf("%s", &str2);
//     // for (i=0; str1[i]!='\0'; )
//     while (i=0; j=0; str1[i]!='\0', str2[j]!='\0'){
//         int value= strcmp(str1[i], str2[j]);
//         if (value==0){
//             i--;
//             j--;
//         }else{
//             printf("strings are not equal!");
//             break;
//         }
//         i++;
//         j++;
//     }
//     return 0;
// }



// int main(){
//     char string1[50];
//     char string2[50];
//     printf("enter first string: ");
//     scanf("%s", &string1);
//     printf("enter second string: ");
//     scanf("%s", &string2);
//     int value= strcmp(string1, string2);
//     if (value==0){
//         printf("the strings are equal!");
//     }else{
//         printf("the strings are not equal!");
//     }
//     return 0;
// }