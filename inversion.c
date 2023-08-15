#include <stdio.h>

// // Function to invert bits in a range
// int invertBitsInRange(int num, int start, int count) {
//     int mask = ((1 << count) - 1) << start;  // Create a mask for the specified range
//     return num ^ mask;  // XOR operation to invert the bits in the range
// }

// int main() {
//     int num, start, count;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     printf("Enter starting position: ");
//     scanf("%d", &start);

//     printf("Enter number of bits to invert: ");
//     scanf("%d", &count);

//     int invertedNum = invertBitsInRange(num, start, count);

//     printf("Original number: %d\n", num);
//     printf("Inverted number: %d\n", invertedNum);

//     return 0;
// }




// int main(){
//     int numb;
//     printf("enter the number");
//     scanf("%d", &numb);
//     for (int i=0; i<=numb; i++){
//         numb= numb%10;
//         // int invert= ~(numb);
//         int invert;
//         invert= ~numb;
//         printf("%d", invert);
//         numb= numb/10;
//     }
//     return 0;
// }



#include<stdio.h>

int main(){
    int binary[20];
   int n,i=0,j,count=0,a,b;

   printf("enter n: ");
   scanf("%d",&n);

    while(n>0)
  {
    binary[i]=n%2;
    n=n/2;
    i++;
  }
  for(j=i-1;j>=0;j--)
 {
   printf("%d",binary[j]);
 } 
printf("\n");
printf("The lenght of bits is %d so the inversion of bits can be performed between 1 to %d\n",i,i);
   printf("inversion start from: ");
   scanf("%d",&a);
   

   printf("inversion till: ");
   scanf("%d",&b);

 if(a>b || a>i || b>i)
 {
  printf("Enter valid input");
 } 
 else
 {
  for(j=i-b;j<=i-a;j++)
  if(binary[j]==0)
  {
    binary[j]=1;
  }
  else
  {
    binary[j]=0;
  }
 }
for(j=i-1;j>=0;j--)
 {
   printf("%d",binary[j]);
 } 
 

return 0;
}
