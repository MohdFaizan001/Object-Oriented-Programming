#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
     
    int digitsCount;
    printf("Enter the number of digits of number:");
    scanf("%d",&digitsCount);

    
   int arr[digitsCount];
   for (int i = 0; i < digitsCount; i++)
   {
   arr[i] = num % 10;
   num /= 10;
   }

   printf("The number after reversing:");

   for (int i = 0; i <digitsCount; i++)
   {
   printf("%d",arr[i]);
   }
   
   return 0;
}