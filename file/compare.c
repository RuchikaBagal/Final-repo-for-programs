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

