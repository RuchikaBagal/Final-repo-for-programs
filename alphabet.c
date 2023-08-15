// #include <stdio.h>
// #include<string.h>
// int main(){
//     char ch;
//     char string[]= {'a','b','c','d','\0'};
//     printf("%s", string);
//     while (ch!= '\0'){
//         printf("%c",ch);
//         ch++;
//     }
//     return 0;
// }

#include <stdio.h>

void expandNorm(const char *input, char *output) {
    int i = 0, j = 0;

    while (input[i]) {
        if (input[i] == '-') {
            if (i == 0 || !input[i + 1] || input[i + 1] == '-')
                output[j++] = '-';
            else {
                char start = input[i - 1];
                char end = input[i + 1];
                if (start < end) {
                    for (char c = start + 1; c < end; ++c)
                        output[j++] = c;
                } else {
                    for (char c = start - 1; c > end; --c)
                        output[j++] = c;
                }
            }
        } else {
            output[j++] = input[i];
        }
        ++i;
    }
    output[j] = '\0';
}

int main() {
    char input[100];
    printf("Enter the short norm: ");
    scanf("%s", input);

    char expanded[100];
    expandNorm(input, expanded);

    printf("Expanded string: %s\n", expanded);

    return 0;
}


