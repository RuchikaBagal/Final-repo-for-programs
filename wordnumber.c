
//Write a C program that displays given number in string format. e.g., 10 -> ten 100 -> hundred 5270 -> five thousand two hundred seventy
#include<stdio.h>
#include<string.h>
int main()
{

int n,x,y,z;
printf("enter the number: ");
scanf("%d", &n);
char a[][20] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten"};
char b[][20] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char c[][20] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
char d[][20] = {"hundred", "thousand"};

if (n>0 && n<10)
   {
      printf("%s", a[n]);
   }
else if (n>10 && n<=19)
   {
    x= n%10;
    printf("%s", b[x]);
  }
else if (n>100 && n<1000)
  {
    x= n %100;
    y= n/100;
    printf("%s %s %s %s", a[n/100], d[x/100], c[x/10], a[x%10]);
  }
else if (n>10 && n<100) 
{
  printf("%s %s", c[n/10], a[n%10]);
}
else if (n>1000 && n<10000)
{
  if (n%1000 !=0)
  {
      x= n%1000;
      z= n/10;
       y= x/10;
      if(z%100==0)
      {
          printf("%s %s %s", a[n/1000],d[1],a[x%10]);
      }
      else{
     
      printf("%s %s %s %s %s %s", a[n/1000], d[1], a[x/100], d[0], c[y%10], a[x%10]);
      }

  } 
  else {
    printf("%s %s", a[n/1000],d[1]);
 } 
}
  else
    {
   printf("zero");
    }

return 0;
}