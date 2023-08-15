                                    // reverse the digits


#include<stdio.h>
// int reverse(int arr[], int n);
// int print(int arr[], int n);

// int main(){
// int arr[]= {7,9,8,3,5,6};
// // int arr[6];
// // printf("pass the array", arr);
// // scanf("%d", &arr);
// reverse(arr,6);
// print(arr, 6);
// // printf("the reverse of the number given in an array is equals to: %d", print(arr, 6));
// return 0;
// }

// int reverse(int arr[], int n)
// {
//     for(int i=0; i<n/2; i++){
//         int firstvalue= arr[i];
//         int secondvalue= arr[n-i-1];
//         arr[i]= secondvalue;
//         arr[n-i-1]= firstvalue;
//         // printf("hello");
//     }
    
//     return 0;
// }

// int print(int arr[], int n)
// {
//     for (int i=0; i<n; i++){

//         printf("%d\t", arr[i]);
//     }
//     printf("\n");

// }




// #include <stdio.h>
// int main()
// {
//     int number;
//     int reverse = 0;
//     int remainder;
//     printf("\nEnter a number: ");
//     scanf("%d",&number);
//     // printf("\nReversed Number: ");
//     while(number != 0)
//     {
//         remainder = number%10;
//         reverse = reverse*10 + remainder;
//         number /= 10;
//     }

//     printf("%d",reverse);
//     return 0;
// }

// OR

#include<stdio.h>
int main() {
    // Write C code here
    int numb;
    printf("enter your number");
    scanf("%d",&numb);
    int numb1;
    // printf("enter your second character");
    // scanf("%c",&str2);
    for (int i = 0; i<=numb; i++ )
    {
        numb1= numb%10;
        printf("%d", numb1);
        numb= numb/10;

    }

    return 0;
}


// int size:
// printf("enter the size of array");
// scanf("%d",&size);
// int arr[size];
// for (int i=0; i<=size; i++){
//    printf("value is %d",i+1);
//    scanf("%d", &arr[i]);

// }
//     return 0;
// }

/* taking array as an input from the user*/


// #include <stdio.h>

// int main() {
// int size;
// printf("enter the size of array");
// scanf("%d", &size);
// int arr[size];
// for(int i=0; i<size; i++){
//    printf("value %d is: ",i+1 );
//    scanf("%d", &arr[i]);
// }
// printf("the array you have entered is: ");
// for (int i=0; i<size; i++){
//    printf("%d\t", arr[i]);
// }

// 	return 0;
// }

