#include <stdio.h>

int countones(int num) {
    int count = 0;
    printf("the binary equivalent of the number %d is ", num);
    while (num > 0) {
        
        int numb = num % 2;
        //printf("%d", numb);
        if (numb == 1) {
            count++;
        }
        num /= 2; // Divide by 2 to move to the next binary digit
    }
    return count;
}

int main() {
    int num;
    int a[10],n,i; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive value.\n");
    } else {
        int onesCount = countones(num);
        printf("\nNumber of 1's in binary representation are: %d\n", onesCount);
    }
    for(i=0;num>0;i++)    
       {    
          a[i]=num%2;    
           num=num/2;    
         }    
        printf("\nBinary of Given Number is=");    
          for(i=i-1;i>=0;i--)    
          {    
           printf("%d",a[i]);    
            }    

    return 0;
}
