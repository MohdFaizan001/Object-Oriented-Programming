#include<stdio.h>
//late fee start after 7 days of book issued.
// after 7 day 1 rs per day late fee
// after 15 days 5 rs per day late fee
// after 30 days 10 rs per day late fee

void lateFeeCalculator(int days){
    int lateFee = 0;
    if(days > 30){
        lateFee = (8*1) + (15*5) + ((days - 30)*10);
    } else if (days > 15){
        lateFee = (8*1) + ((days - 15)*5);
    } else if (days > 7){
        lateFee = (days -7)*1;
    } else {
        lateFee = 0;
    }

    if (lateFee > 0)
    {
       printf("Your Late fee is : %d Rs\n",lateFee);
    } else{
       printf("No Late fee , THANK YOU !!\n");
    }
    
    
}

int main(){
    int days;

    printf("Enter the number of days book is issued : ");
    scanf("%d",&days);

    lateFeeCalculator(days);

    return 0;
}