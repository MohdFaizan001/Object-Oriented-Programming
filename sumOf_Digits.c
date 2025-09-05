#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int digitsCount ;
    printf("Enter the no_of digits of number :");
    scanf("%d",&digitsCount);

    int sum = 0;
    
    for (int i = 0; i < digitsCount; i++)
    {
       sum += (num % 10);
        num = num / 10;
    }
    printf("the sum of digits of number is : %d", sum);

    return 0;
}