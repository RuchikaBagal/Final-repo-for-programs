#include<stdio.h>
int find(char string[], char word);
int main(){
    // char string[]= "helloworld";
    char string[50];
    char word;
    printf("enter the string: ");
    scanf("%s", &string);
    
    printf("enter the keyword you want to search: ");
    scanf(" %c", &word);
    
    int result = find(string, word);
    if (result ==1){
        printf("search successful!");
        
    }else{
        printf("search unsuccessful!");
    }
    //printf("%d", result);//
    return 0;
}

int find(char string[], char word)
{
    for (int i =0; string[i]!='\0'; i++){
        if (word==string[i]){
            return 1;
        }
    }
    return 0;
}
