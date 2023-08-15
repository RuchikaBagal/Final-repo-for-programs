#include <stdio.h>
int Index(int array[], int size, int Value);


int main() {
    int array[] = {1, 2, 5, 9, 11};
    int size = sizeof(array) / sizeof(array[0]); //

    int Value;
    printf("Enter the value to search: ");
    scanf("%d", &Value);

    int index = Index(array, size, Value);

    if (index == -1) {
        
        printf("Element not found.\n");
    } else {
        printf("Element found at index: %d\n", index);
    }

    return 0;
}
int Index(int array[], int size, int Value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == Value) {
            return i;  
        }
    }
    return -1;  
}