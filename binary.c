#include <stdio.h>

int countones(int num) {
    int count = 0, numb;
    while (num > 0) {
        for (int i=0; i<=num; i++){
            numb= num%2;
            printf("%d",numb);
            if (num % 2 == 1) {

            count++;
        }
        num /= 2; // Divide by 2 to move to the next binary digit
    }
            // count++;
            // num = num/2;
        }
    //     if (num % 2 == 1) {

    //         count++;
    //     }
    //     num /= 2; // Divide by 2 to move to the next binary digit
    // }
    // printf("%d", count);
    return count;
}
int arr[6];
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    // printf("the binary you want to check is %d", num);
    int onesCount= countones(num);
    printf("Number of 1's in binary are %d", onesCount);

    // if (num < 0) {
    //     printf("Please enter a positive value: \n");
    // } else {
    //     int onesCount = countOnes(num);
    //     printf("Number of 1's in binary representation of %d is: %d\n", num, onesCount);
    // }

    return 0;
}
